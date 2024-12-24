#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

//All functions gives the form info of thier textLine to mainWindow.
int Dialog::itemIdInfo()
{
    QString info = ui->idLine->text();
    return info.toInt();
}

qreal Dialog::itemAngleInfo()
{
    QString info = ui->angleLine->text();
    return info.toInt();
}

qreal Dialog::itemSpeedInfo()
{
    QString info = ui->speedLine->text();
    return info.toInt();
}

int Dialog::itemPosXInfo()
{
    QString info = ui->xLine->text();
    return info.toInt();
}

int Dialog::itemPosYInfo()
{
    QString info = ui->yLine->text();
    return info.toInt();
}
