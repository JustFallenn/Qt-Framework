/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDialog
{
public:
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *myDialog)
    {
        if (myDialog->objectName().isEmpty())
            myDialog->setObjectName("myDialog");
        myDialog->resize(400, 300);
        pushButton = new QPushButton(myDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 220, 111, 41));
        plainTextEdit = new QPlainTextEdit(myDialog);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(100, 70, 191, 131));

        retranslateUi(myDialog);

        QMetaObject::connectSlotsByName(myDialog);
    } // setupUi

    void retranslateUi(QDialog *myDialog)
    {
        myDialog->setWindowTitle(QCoreApplication::translate("myDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("myDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myDialog: public Ui_myDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
