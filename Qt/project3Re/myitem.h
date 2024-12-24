#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QtGui>


class MyItem : public QGraphicsItem
{
public:
    MyItem();
    MyItem(int id, qreal angle, qreal speed, int startX, int startY);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    int isId();

protected:
    void advance(int phase);

private:
    int id;
    int startX;
    int startY;
    qreal angle;
    qreal speed;
    void DoCollision();
};


#endif // MYITEM_H
