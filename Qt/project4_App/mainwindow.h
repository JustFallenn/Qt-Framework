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
#include "client.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor.
    MainWindow(QWidget *parent = nullptr);
    // Destructor.
    ~MainWindow();
    // Functions.
    void paintScene();
    void counter();
    void addToScene(std::vector<MyItem*> &items);
    void clearScene(std::vector<MyItem*> &items);
    void onDataReady();
    // Getters.
    // Setters.

private:
    Ui::MainWindow *ui;
    // All objects are static.
    QGraphicsScene scene;
    QTimer timer;

    Client client;

    // Item vector.
    std::vector<MyItem*> items;

};
#endif // MAINWINDOW_H
