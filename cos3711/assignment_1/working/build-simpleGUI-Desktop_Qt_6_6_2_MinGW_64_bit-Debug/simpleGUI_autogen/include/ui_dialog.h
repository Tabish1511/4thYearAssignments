/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QCheckBox *checkBox;
    QPushButton *addButton;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(534, 344);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 50, 221, 25));
        dateEdit = new QDateEdit(Dialog);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(160, 120, 221, 26));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(300, 160, 80, 23));
        addButton = new QPushButton(Dialog);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(170, 250, 80, 25));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 250, 80, 25));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "CheckBox", nullptr));
        addButton->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
