#include "databasemanager.h"

DatabaseManager::DatabaseManager()
{
}

QSqlDatabase DatabaseManager::createDB()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/stajer/Desktop/stajer/myDb");
    return db;
}

void DatabaseManager::openDB()
{
    if (db.open()) {
        qDebug() << "db is open and ready.";
    } else {
        qDebug() << "error! db could not opened.";
    }
}

void DatabaseManager::addItem()
{

}
