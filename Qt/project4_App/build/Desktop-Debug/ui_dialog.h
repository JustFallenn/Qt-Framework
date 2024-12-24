/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *xLine;
    QLineEdit *yLine;
    QLabel *itemAngle;
    QLabel *itemPosY;
    QLabel *itemId;
    QLabel *itemSpeed;
    QLineEdit *speedLine;
    QLabel *itemPosX;
    QLineEdit *angleLine;
    QLineEdit *idLine;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        xLine = new QLineEdit(Dialog);
        xLine->setObjectName("xLine");

        gridLayout->addWidget(xLine, 3, 3, 1, 1);

        yLine = new QLineEdit(Dialog);
        yLine->setObjectName("yLine");

        gridLayout->addWidget(yLine, 4, 3, 1, 1);

        itemAngle = new QLabel(Dialog);
        itemAngle->setObjectName("itemAngle");

        gridLayout->addWidget(itemAngle, 1, 0, 1, 2);

        itemPosY = new QLabel(Dialog);
        itemPosY->setObjectName("itemPosY");

        gridLayout->addWidget(itemPosY, 4, 0, 1, 3);

        itemId = new QLabel(Dialog);
        itemId->setObjectName("itemId");
        itemId->setEnabled(true);

        gridLayout->addWidget(itemId, 0, 0, 1, 1);

        itemSpeed = new QLabel(Dialog);
        itemSpeed->setObjectName("itemSpeed");

        gridLayout->addWidget(itemSpeed, 2, 0, 1, 2);

        speedLine = new QLineEdit(Dialog);
        speedLine->setObjectName("speedLine");

        gridLayout->addWidget(speedLine, 2, 2, 1, 2);

        itemPosX = new QLabel(Dialog);
        itemPosX->setObjectName("itemPosX");

        gridLayout->addWidget(itemPosX, 3, 0, 1, 3);

        angleLine = new QLineEdit(Dialog);
        angleLine->setObjectName("angleLine");

        gridLayout->addWidget(angleLine, 1, 2, 1, 2);

        idLine = new QLineEdit(Dialog);
        idLine->setObjectName("idLine");

        gridLayout->addWidget(idLine, 0, 1, 1, 3);


        verticalLayout->addLayout(gridLayout);

        buttonBox_2 = new QDialogButtonBox(Dialog);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setOrientation(Qt::Horizontal);
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        xLine->setText(QString());
        yLine->setText(QString());
        itemAngle->setText(QCoreApplication::translate("Dialog", "ItemAngle", nullptr));
        itemPosY->setText(QCoreApplication::translate("Dialog", "ItemStartPosY", nullptr));
        itemId->setText(QCoreApplication::translate("Dialog", "ItemId", nullptr));
        itemSpeed->setText(QCoreApplication::translate("Dialog", "ItemSpeed", nullptr));
        speedLine->setText(QString());
        itemPosX->setText(QCoreApplication::translate("Dialog", "ItemStartPosX", nullptr));
        angleLine->setText(QString());
        idLine->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
