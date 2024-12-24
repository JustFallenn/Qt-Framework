#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = dbManager.createDB();


    if (db.isOpen()) {
        qDebug() << "yep. its open.";
    } else {
        qDebug() << "nooo";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
