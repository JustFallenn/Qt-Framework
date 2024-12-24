#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "myitem.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    paintScene();
    counter();

    MyItem *item = new MyItem();
    scene.addItem(item);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::counter()
{
    //timer finish, finish advance
    connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(100);
}


void MainWindow::paintScene()
{
    ui->graphicsView->setScene(&scene);
    //ui->graphicsView->setBackgroundBrush(Qt::white);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene.setSceneRect(-200, -200, 1870, 890);

    QPen myPen = QPen(Qt::red);
    QLineF top(scene.sceneRect().topLeft(), scene.sceneRect().topRight());
    QLineF bottom(scene.sceneRect().bottomLeft(), scene.sceneRect().bottomRight());
    QLineF left(scene.sceneRect().topLeft(), scene.sceneRect().bottomLeft());
    QLineF right(scene.sceneRect().topRight(), scene.sceneRect().bottomRight());

    scene.addLine(top, myPen);
    scene.addLine(bottom, myPen);
    scene.addLine(left, myPen);
    scene.addLine(right, myPen);
}
