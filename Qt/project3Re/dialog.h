#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <qmainwindow.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    Ui::Dialog *uiControl() {
        return ui;
    }
    ~Dialog();
    int itemIdInfo();
    qreal itemAngleInfo();
    qreal itemSpeedInfo();
    int itemPosXInfo();
    int itemPosYInfo();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
