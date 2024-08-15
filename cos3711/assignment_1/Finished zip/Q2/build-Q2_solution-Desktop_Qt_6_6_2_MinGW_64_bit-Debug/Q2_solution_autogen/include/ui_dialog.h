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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QDateEdit *dateEdit;
    QPushButton *addButton;
    QPushButton *displayButton;
    QTextEdit *userInputBlock;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(732, 332);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 80, 241, 25));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(240, 170, 80, 23));
        dateEdit = new QDateEdit(Dialog);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(80, 120, 241, 26));
        addButton = new QPushButton(Dialog);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(80, 250, 80, 25));
        displayButton = new QPushButton(Dialog);
        displayButton->setObjectName("displayButton");
        displayButton->setGeometry(QRect(240, 250, 80, 25));
        userInputBlock = new QTextEdit(Dialog);
        userInputBlock->setObjectName("userInputBlock");
        userInputBlock->setGeometry(QRect(400, 40, 281, 241));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "CheckBox", nullptr));
        addButton->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        displayButton->setText(QCoreApplication::translate("Dialog", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
