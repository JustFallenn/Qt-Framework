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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *itemPosY;
    QLabel *itemId;
    QLineEdit *idLine;
    QLabel *itemAngle;
    QLineEdit *xLine;
    QLineEdit *speedLine;
    QLineEdit *angleLine;
    QLabel *itemSpeed;
    QLineEdit *yLine;
    QLabel *itemPosX;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        itemPosY = new QLabel(Dialog);
        itemPosY->setObjectName("itemPosY");

        gridLayout->addWidget(itemPosY, 4, 0, 1, 3);

        itemId = new QLabel(Dialog);
        itemId->setObjectName("itemId");
        itemId->setEnabled(true);

        gridLayout->addWidget(itemId, 0, 0, 1, 1);

        idLine = new QLineEdit(Dialog);
        idLine->setObjectName("idLine");

        gridLayout->addWidget(idLine, 0, 1, 1, 3);

        itemAngle = new QLabel(Dialog);
        itemAngle->setObjectName("itemAngle");

        gridLayout->addWidget(itemAngle, 1, 0, 1, 2);

        xLine = new QLineEdit(Dialog);
        xLine->setObjectName("xLine");

        gridLayout->addWidget(xLine, 3, 3, 1, 1);

        speedLine = new QLineEdit(Dialog);
        speedLine->setObjectName("speedLine");

        gridLayout->addWidget(speedLine, 2, 2, 1, 2);

        angleLine = new QLineEdit(Dialog);
        angleLine->setObjectName("angleLine");

        gridLayout->addWidget(angleLine, 1, 2, 1, 2);

        itemSpeed = new QLabel(Dialog);
        itemSpeed->setObjectName("itemSpeed");

        gridLayout->addWidget(itemSpeed, 2, 0, 1, 2);

        yLine = new QLineEdit(Dialog);
        yLine->setObjectName("yLine");

        gridLayout->addWidget(yLine, 4, 3, 1, 1);

        itemPosX = new QLabel(Dialog);
        itemPosX->setObjectName("itemPosX");

        gridLayout->addWidget(itemPosX, 3, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        itemPosY->setText(QCoreApplication::translate("Dialog", "ItemStartPosY", nullptr));
        itemId->setText(QCoreApplication::translate("Dialog", "ItemId", nullptr));
        idLine->setText(QString());
        itemAngle->setText(QCoreApplication::translate("Dialog", "ItemAngle", nullptr));
        xLine->setText(QString());
        speedLine->setText(QString());
        angleLine->setText(QString());
        itemSpeed->setText(QCoreApplication::translate("Dialog", "ItemSpeed", nullptr));
        yLine->setText(QString());
        itemPosX->setText(QCoreApplication::translate("Dialog", "ItemStartPosX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
