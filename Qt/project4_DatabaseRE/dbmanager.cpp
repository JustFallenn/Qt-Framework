#include "dbmanager.h"

// Constructor
DbManager::DbManager()
{
}

// Destructor
DbManager::~DbManager()
{
    db.close();
}

// Connect to the specific database.
void DbManager::createDbConnection()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/stajer/Desktop/stajer/project.db");
    db.open();
    qDebug() << "Database Connected.";
}

// Take all the track data according to table we use.
std::vector<QString> DbManager::dataCollection() {
    QSqlQuery qry;
    std::vector<QString> data;

    QString qryStr = "SELECT * from tracks_1;";
    if (qry.exec(qryStr)) {
        qDebug() << "Execution of SELECT query successfull!";

        while (qry.next()) {
            QString track = QString::number(qry.value(0).toInt()) + ";"
                            + QString::number(qry.value(1).toInt()) + ";"
                            + QString::number(qry.value(2).toInt());
            qDebug() << "Track: " << track;
            data.push_back(track);
        }
    }
    return data;
}
