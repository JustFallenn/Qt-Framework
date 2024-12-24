#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QDebug>

class DatabaseManager
{
public:
    DatabaseManager();
    QSqlDatabase createDB();
    void openDB();
    void addItem();
private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
