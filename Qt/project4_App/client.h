#ifndef CLIENT_H
#define CLIENT_H


#include <QDataStream>
#include <QTcpSocket>
#include <QObject>
#include <QtCore>
#include <QtNetwork>
#include "myitem.h"


class Client :public QObject
{
    Q_OBJECT
public:
    // Constructor.
    explicit Client(QObject *parent = nullptr);
    // Destructor.
    // Functions.
    void itemTracker(std::vector<MyItem*> &items);
    // Getters.
    // Setters

private slots:
    void readTrack();

signals:
    void dataReady();

private:
    QTcpSocket *tcpSocket = nullptr;
    QDataStream in;
    // The received data.
    QStringList receivedTrack;
};

#endif // CLIENT_H
