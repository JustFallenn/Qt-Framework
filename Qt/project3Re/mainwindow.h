#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QtCore>
#include <QGraphicsScene>
#include <QtGui>
#include "myitem.h"
#include "dbmanager.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void paintScene();
    void counter();
    void addToScene(std::vector<MyItem*> &items);
    void clearScene(std::vector<MyItem*> &items);

private slots:
    void on_insertButton_clicked();
    void on_deleteButton_clicked();

private:
    Ui::MainWindow *ui;
    // All objects are static.
    QGraphicsScene scene;
    QTimer timer;

    DbManager dbManager;
    QSqlDatabase db;

    std::vector<MyItem*> items;

    Dialog dialog;
};
#endif // MAINWINDOW_H
