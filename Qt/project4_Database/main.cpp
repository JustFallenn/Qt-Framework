#include <QCoreApplication>
#include <QtNetwork>
#include "dbmanager.h"
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server server;
    return a.exec();
}
