#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QGraphicsScene>
#include <QtGui>


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

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    QTimer timer;
};





#endif // MAINWINDOW_H
