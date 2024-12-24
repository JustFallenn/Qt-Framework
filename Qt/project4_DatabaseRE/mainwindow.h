#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QtNetwork>
#include "server.h"


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
    // Getters.
    // Setters.
private slots:
    void serverStats();

private:
    Ui::MainWindow *ui;
    // Server object (all server operation done by it.)
    Server server;
};
#endif // MAINWINDOW_H
