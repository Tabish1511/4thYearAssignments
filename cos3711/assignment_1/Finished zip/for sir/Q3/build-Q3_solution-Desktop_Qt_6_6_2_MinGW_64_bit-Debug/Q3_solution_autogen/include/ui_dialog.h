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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *composerEdit;
    QLineEdit *albumEdit;
    QDoubleSpinBox *replacementSpinBox;
    QSpinBox *ratingSpinBox;
    QPushButton *addMusic;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1201, 736);
        composerEdit = new QLineEdit(Dialog);
        composerEdit->setObjectName("composerEdit");
        composerEdit->setGeometry(QRect(40, 80, 211, 25));
        albumEdit = new QLineEdit(Dialog);
        albumEdit->setObjectName("albumEdit");
        albumEdit->setGeometry(QRect(260, 80, 211, 25));
        replacementSpinBox = new QDoubleSpinBox(Dialog);
        replacementSpinBox->setObjectName("replacementSpinBox");
        replacementSpinBox->setGeometry(QRect(480, 80, 201, 26));
        replacementSpinBox->setMaximum(250.000000000000000);
        ratingSpinBox = new QSpinBox(Dialog);
        ratingSpinBox->setObjectName("ratingSpinBox");
        ratingSpinBox->setGeometry(QRect(690, 80, 221, 26));
        addMusic = new QPushButton(Dialog);
        addMusic->setObjectName("addMusic");
        addMusic->setGeometry(QRect(1070, 80, 80, 25));
        tableWidget = new QTableWidget(Dialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 140, 1111, 561));
        tableWidget->setRowCount(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        addMusic->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog", "Composer", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog", "Album Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog", "Replacement Cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog", "Rating", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
