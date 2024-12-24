#include "client.h"


// Client Constructor
Client::Client(QObject *parent)
    : QObject{parent}
{
    tcpSocket = new QTcpSocket();

    in.setDevice(tcpSocket);
    in.setVersion(QDataStream::Qt_6_4);

    connect(tcpSocket, &QTcpSocket::readyRead, this, &Client::readTrack);

    tcpSocket->connectToHost(QHostAddress::LocalHost, 12345);
    qDebug() << "Client activated.";
}


// Read the data that comes from database server.
void Client::readTrack()
{
    // When datastream ready start to read.
    in.startTransaction();
    QString track;
    in >> track;

    // Check, if there is loss or not.
    if (!in.commitTransaction()) {
        return;
    }

    // Convert the received data to usefull data.
    qDebug() << "Received Data from Database Server: " << track;
    this->receivedTrack = track.split(";", Qt::SkipEmptyParts);

    // Emit ready signal to the mainWindow to start tracking operations.
    emit dataReady();
}


void Client::itemTracker(std::vector<MyItem *> &items)
{
    int selectedId = (receivedTrack[0]).toInt();
    // Check whether the item is already added or it will be created!
    auto findItem = std::find_if(items.begin(), items.end(), [selectedId](MyItem* item){return item->getId() == selectedId;});

    if (findItem != items.end()) {
        // Change coordinated speed (MOVE).
        qDebug() << "Moved: " << (receivedTrack[0]).toInt();
        (*findItem)->setSpeedX((receivedTrack[1]).toInt());
        (*findItem)->setSpeedY((receivedTrack[2]).toInt());
    } else {
        int selectedStartX =  (receivedTrack[1]).toInt();
        int selectedStartY =  (receivedTrack[2]).toInt();

        // Create item object dynamically
        qDebug() << "Created: " << (receivedTrack[0]).toInt();
        MyItem *item = new MyItem(selectedId, selectedStartX, selectedStartY);
        items.push_back(item);

        // First speed.
        items.back()->setSpeedX((receivedTrack[1]).toInt());
        items.back()->setSpeedY((receivedTrack[2]).toInt());
    }
}




