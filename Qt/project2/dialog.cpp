#include "dialog.h"
#include "./ui_dialog.h"
#include "myitem.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    paintScene();

    //timer finish, finish advance
    connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(100);

    MyItem *item = new MyItem();
    scene.addItem(item);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::paintScene() {
    ui->graphicsView->setScene(&scene);
    //ui->graphicsView->setBackgroundBrush(Qt::white);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene.setSceneRect(-200, -200, 1800, 890);

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

