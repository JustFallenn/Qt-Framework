#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QtCore>


class DbManager
{
public:
    // Constructor.
    DbManager();
    // Destructor.
    ~DbManager();
    // Functions.
    void createDbConnection();
    std::vector<QString> dataCollection();
    // Getters.
    // Setters.
private:
    QSqlDatabase db;
};

#endif // DBMANAGER_H

