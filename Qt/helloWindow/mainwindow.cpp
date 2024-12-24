#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello, World!");
    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
    ui->progressBar->setValue(22);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar_2, SLOT(setValue(int)));
}


void MainWindow::on_actionNew_Window_triggered()
{
    mDialog = new myDialog(this);
    mDialog->show();
}

