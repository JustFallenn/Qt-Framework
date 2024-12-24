#ifndef MYITEM_H
#define MYITEM_H


#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <QtGui>


class MyItem : public QGraphicsItem
{
public:
    // Constructors.
    MyItem();
    MyItem(int id, int startX, int startY);
    // Destructor.
    // Functions.
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    // Getters.
    int getId();
    // Setters.
    void setSpeedX(int posX);
    void setSpeedY(int posY);

protected:
    void advance(int phase);

private:
    // Item properties.
    int id;
    int startX;
    int startY;

    // Speed properties.
    qreal speedX;
    qreal speedY;

    // Can be implemented.
    void DoCollision();
};


#endif // MYITEM_H
