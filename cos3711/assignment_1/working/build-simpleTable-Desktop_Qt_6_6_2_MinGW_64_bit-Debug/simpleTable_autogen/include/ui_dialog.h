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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableWidget *tableWidget;
    QLineEdit *composerEdit;
    QLineEdit *albumEdit;
    QPushButton *addMusic;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *ratingSpinBox;
    QDoubleSpinBox *replacementSpinBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(982, 604);
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
        tableWidget->setGeometry(QRect(10, 230, 951, 361));
        tableWidget->setRowCount(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        composerEdit = new QLineEdit(Dialog);
        composerEdit->setObjectName("composerEdit");
        composerEdit->setGeometry(QRect(20, 80, 161, 25));
        albumEdit = new QLineEdit(Dialog);
        albumEdit->setObjectName("albumEdit");
        albumEdit->setGeometry(QRect(190, 80, 161, 25));
        addMusic = new QPushButton(Dialog);
        addMusic->setObjectName("addMusic");
        addMusic->setGeometry(QRect(870, 80, 80, 25));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 101, 17));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 40, 111, 17));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 40, 121, 17));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(540, 40, 121, 17));
        ratingSpinBox = new QSpinBox(Dialog);
        ratingSpinBox->setObjectName("ratingSpinBox");
        ratingSpinBox->setGeometry(QRect(540, 80, 171, 31));
        replacementSpinBox = new QDoubleSpinBox(Dialog);
        replacementSpinBox->setObjectName("replacementSpinBox");
        replacementSpinBox->setGeometry(QRect(360, 80, 171, 31));
        replacementSpinBox->setMaximum(250.000000000000000);
        replacementSpinBox->setValue(0.000000000000000);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog", "Album", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog", "Replacement Cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog", "Rating", nullptr));
        addMusic->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Composer", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Album Title", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Replacement Cost", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Rating", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
