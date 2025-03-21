#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QGraphicsScene>
#include <QtGui>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    void paintScene();
    ~Dialog();

private:
    Ui::Dialog *ui;
    QGraphicsScene scene;
    QTimer timer;
};
#endif // DIALOG_H
