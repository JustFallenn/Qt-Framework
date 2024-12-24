#include "server.h"

// Constructor
Server::Server(QObject *parent)
    : QObject{parent}
{
    // Connect to the database.
    dbManager.createDbConnection();
    // Initialize the server.
    initServer();

    // If there is connection with client, begin data transfering.
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::connected);
}

// Server Initializer.
void Server::initServer()
{
    // Create new tcpServer.
    tcpServer = new QTcpServer(this);

    if (!tcpServer->listen(QHostAddress::LocalHost, 12345)) {
        qDebug() << "Unable to start DATABASE SERVER!";
        return;
    }

    // Server Information.
    QString ipAddress;
    if (ipAddress.isEmpty()) {
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
    }
    qDebug() << "Server initiated.";
    qDebug() << "Server information: ";
    qDebug() << "Ip: " + ipAddress;
    qDebug() << "Port: " + QString::number(tcpServer->serverPort());
}

// If there is connection to client, start operations.
void Server::connected() {
    // Wait for connection
    clientConnection = tcpServer->nextPendingConnection();
    // Some caution for disconnection.
    connect(clientConnection, &QAbstractSocket::disconnected, this, &Server::disconnected);
    connect(clientConnection, &QAbstractSocket::disconnected, clientConnection, &QObject::deleteLater);

    qDebug() << "Client connected.";
    // Take all the track data from database.
    sendData = dbManager.dataCollection();
    // Send the track data according to timer.
    connect(&timer, &QTimer::timeout, this, &Server::sendTrack);
    timer.start(1000);
}

// If there is disconnection.
void Server::disconnected() {
    qDebug() << "Client disconnected.";
    clientConnection = nullptr;

    timer.stop(); // Stop the timer when the client disconnects.
    disconnect(&timer, &QTimer::timeout, this, &Server::sendTrack); // Clean up connections.
    dataCount = 0; // Reset dataCount.
}

// Send the data to client.
void Server::sendTrack()
{
    // Check there is connection or not.
    if (!clientConnection) {
        return;
    }

    qDebug() << "Sending Data...";
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_4);

    // Send data.
    if (dataCount >= sendData.size()) {
        qDebug() << "No more data to send.";
        timer.stop();
        disconnect(&timer, &QTimer::timeout, this, &Server::sendTrack);
        return;
    }

    out << sendData[dataCount];
    clientConnection->write(block);
    clientConnection->flush();

    // Keep track of the data that send.
    dataCount++;
}
