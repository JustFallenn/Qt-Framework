#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QtCore>
#include "myitem.h"

class DbManager
{
public:
    DbManager();
    void createDbConnection(QSqlDatabase &db);
    void selectItems(std::vector<MyItem*> &items);
    void insertItem(std::vector<MyItem*> &items, int selectedId, qreal selectedAngle, qreal selectedSpeed, int selectedStartX, int selectedStartY);
    void deleteItem(std::vector<MyItem*> &items, int selectedId);

private:

};

#endif // DBMANAGER_H
