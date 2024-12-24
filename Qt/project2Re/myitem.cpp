#include "myitem.h"


MyItem::MyItem()
{
    angle = (rand() % 3160);
    setRotation(angle);
    speed = 60;

    int startX = 0;
    int startY = 200;

    setPos(mapToParent(startX, startY));
}

QRectF MyItem::boundingRect() const
{
    return QRect(0, 0, 60, 60);
}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::gray);

    if (scene()->collidingItems(this).isEmpty()) {
        Brush.setColor(Qt::green);
    } else {
        Brush.setColor(Qt::red);
        DoCollision();
    }

    painter->fillRect(rec, Brush);
    painter->drawRect(rec);

}

void MyItem::advance(int phase)
{
    if (!phase) {
        return;
    }

    //QPointF location = this->pos();
    setPos(mapToParent(speed, 0));

}

void MyItem::DoCollision()
{
    if (rand() % 1) {
        setRotation(rotation() + (180 + (rand() % 10)));
    } else {
        setRotation(rotation() + (180 + (rand() % -10)));
    }

    QPointF newpoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if (!scene()->sceneRect().contains((newpoint))) {
        newpoint = mapToParent(0,0);
    }
    else {
        setPos(newpoint);
    }
}
