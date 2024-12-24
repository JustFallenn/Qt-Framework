#include "myitem.h"


// Default constructor.
MyItem::MyItem()
{
    // Items take default values if not spesified when creating.
    this->id = 0;

    this->startX = 100;
    this->startY = 100;

    // Set the flag to trap the items into the scene.
    this->setFlag(QGraphicsItem::ItemSendsScenePositionChanges);
    // Set the position of item respect to scene (can be parent as well).
    setPos(mapToScene(this->startX, this->startY));
}


// Item constructor that used to create item using the data that comes from database.
MyItem::MyItem(int id, int startX, int startY)
{
    this->id = id;

    this->startX = startX;
    this->startY = startY;

    this->setFlag(QGraphicsItem::ItemSendsScenePositionChanges);
    setPos(mapToScene(this->startX, this->startY));
}


// Size of the item.
QRectF MyItem::boundingRect() const
{
    // Size of the item. painter paints respect to this properties.
    return QRect(-20, -20, 40, 40);
}


// Paint the item.
void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // Create the area of the item that will be painted.
    QRectF rec = boundingRect();
    QBrush Brush(Qt::black);

    // If scene detects colliding items make the items red (alert)
    // DoCollision() can be spesified for any requirements.
    if (!scene()->collidingItems(this).isEmpty()) {
        Brush.setColor(Qt::red);
        //DoCollision(); //its empty for now.
    } else {
        Brush.setColor(Qt::green);
    }

    // Set pen of the painter to see id tag of the item.
    painter->setPen(Qt::black);
    painter->setFont(QFont("times",22));

    // Set id tag to be centered.
    QTextOption textOption;
    textOption.setAlignment(Qt::AlignCenter); // Center the text.

    // Visualize the item.
    painter->fillRect(rec, Brush);
    painter->drawRect(rec);

    painter->drawText(rec, QString::number(this->id), textOption);

}


// Trap the items into the scene by detecting their next move pos is in the scene boundaries or not.
// This function is a overloaded function.
QVariant MyItem::itemChange(GraphicsItemChange change, const QVariant &value)
{
    // If item position change (item advanced).
    if (change == ItemPositionChange && scene()) {
        // Create a next position value.
        QPointF newPos = value.toPointF();
        QRectF rect = scene()->sceneRect();
        // If the new position of the item is not in the boundaries of the scene, keep in the scene.
        if (!rect.contains(newPos)) {
            // Keep the item inside the scene rect.
            newPos.setX(qMin(rect.right(), qMax(newPos.x(), rect.left())));
            newPos.setY(qMin(rect.bottom(), qMax(newPos.y(), rect.top())));
            return newPos;
        }
    }
    return QGraphicsItem::itemChange(change, value);
}


// Move the item
// Needs to request next posx, posy and change the direction. but always needs to take its track!
void MyItem::advance(int phase)
{
    // If there is no movement, do nothing.
    if (!phase) {
        return;
    }

    //QPointF location = this->pos();
    // Item Tracking.
    setPos(pos() + QPointF(speedX, speedY));
}


//DO COLLISION?
void MyItem::DoCollision()
{

}


// GETTERS.
int MyItem::getId() {
    return this->id;
}


// SETTERS.
void MyItem::setSpeedX(int posX)
{
    this->speedX = posX;
}


void MyItem::setSpeedY(int posY)
{
    this->speedY = posY;
}
