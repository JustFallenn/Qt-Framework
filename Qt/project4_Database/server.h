#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QtCore>
#include <QtNetwork>
#include "dbmanager.h"


class Server : public QObject
{
    Q_OBJECT
public:
    // Constructor.
    explicit Server(QObject *parent = nullptr);
    // Destructor.
    // Functions.
    // Getters.
    // Setters.
private slots:
    void sendTrack();
    void connected();
    void disconnected();

private:
    void initServer();
    QTcpServer *tcpServer = nullptr;
    QTcpSocket *clientConnection = nullptr;

    // Database management.
    DbManager dbManager;
    std::vector<QString> sendData;

    // Timing and periodic data sending.
    QTimer timer;
    size_t dataCount = 0;
};

#endif // SERVER_H
