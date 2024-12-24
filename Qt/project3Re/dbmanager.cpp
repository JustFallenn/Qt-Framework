#include "dbmanager.h"

DbManager::DbManager()
{
}

// Create database connection.
void DbManager::createDbConnection(QSqlDatabase &db)
{
    // we used "sqlite3" for our database
    db = QSqlDatabase::addDatabase("QSQLITE");
    // database location
    db.setDatabaseName("/home/stajer/Desktop/stajer/project.db");
    db.open();
}

// Select items from database, and create item objects.
void DbManager::selectItems(std::vector<MyItem*> &items)
{
    QSqlQuery query;
    if (query.exec("SELECT * FROM items")) {
        qDebug() << "execution of select query successfull!";
    }
    // create item objects with gathered info from database, row by row.
    while (query.next()) {
        int selectedId = query.value(0).toInt();
        qreal selectedAngle = query.value(1).toReal();
        qreal selectedSpeed = query.value(2).toReal();
        int selectedStartX = query.value(3).toInt();
        int selectedStartY = query.value(4).toInt();

        // create item object dynamically
        MyItem *item = new MyItem(selectedId, selectedAngle, selectedSpeed, selectedStartX, selectedStartY);
        items.push_back(item);
    }
}

// Insert a item with given properties to database and item vector.
void DbManager::insertItem(std::vector<MyItem*> &items, int selectedId, qreal selectedAngle, qreal selectedSpeed, int selectedStartX, int selectedStartY) {
    QSqlQuery query;
    // execution query
    QString execution = "INSERT INTO items (item_id, item_angle, item_speed, item_start_x, item_start_y) VALUES (" + QString::number(selectedId) + ", " + QString::number(selectedAngle) + ", " + QString::number(selectedSpeed) + ", "  + QString::number(selectedStartX) + ", " + QString::number(selectedStartY) + ");";
    if (query.exec(execution)) {
        qDebug() << "execution of insert query successfull!";
    }

    // create item object dynamically
    MyItem *item = new MyItem(selectedId, selectedAngle, selectedSpeed, selectedStartX, selectedStartY);

    items.push_back(item);
}

// Delete the item with given id.
void DbManager::deleteItem(std::vector<MyItem*> &items, int selectedId) {
    QSqlQuery query;
    QString execution = "DELETE FROM items WHERE item_id = " + QString::number(selectedId) + ";";
    if (query.exec(execution)) {
        qDebug() << "execution of delete query successfull!";
    }
}

