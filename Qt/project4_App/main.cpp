#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Project_4_App");
    w.setWindowState(Qt::WindowMaximized);
    w.setFixedSize(1400, 900);
    w.show();
    return a.exec();
}
