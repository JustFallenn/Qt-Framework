#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Project_4 Server Information");
    w.setFixedSize(350, 150);
    w.show();
    return a.exec();
}
