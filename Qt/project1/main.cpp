#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowState(Qt::WindowMaximized);
    w.setWindowTitle("Project 1");
    w.setFixedSize(1400, 900);
    w.show();

    return a.exec();
}
