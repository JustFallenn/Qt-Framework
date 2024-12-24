#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // show server stats in the mainWindow
    ui->status->setText(server.statusGetter());
    ui->connection->setText(server.connectionGetter());
    ui->data->setText(server.dataGetter());

    connect(&server, &Server::statusChanged, this, &MainWindow::serverStats);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::serverStats()
{
    // slot for status change signal.
    ui->connection->setText(server.connectionGetter());
    ui->data->setText(server.dataGetter());
}

