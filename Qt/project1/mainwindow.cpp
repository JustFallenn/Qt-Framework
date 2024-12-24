#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMouseEvent"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMouseTracking(true);
    ui->centralwidget->setMouseTracking(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    QString coordinates = "Coordinates: X:" + QString::number(event->pos().x()) + " Y: " + QString::number(event->pos().y());
    ui->label->setText(coordinates);
}
