/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_2_email;
    QLineEdit *lineEdit_3_affil;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_searchByName;
    QLabel *label_searchOutput;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_searchByAffiliation;
    QLabel *label_searchOutput_2;
    QPushButton *pushButton_4;
    QLabel *label_searchOutput_3;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 54, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 10, 54, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 10, 61, 21));
        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(120, 10, 113, 25));
        lineEdit_2_email = new QLineEdit(centralwidget);
        lineEdit_2_email->setObjectName("lineEdit_2_email");
        lineEdit_2_email->setGeometry(QRect(340, 10, 113, 25));
        lineEdit_3_affil = new QLineEdit(centralwidget);
        lineEdit_3_affil->setObjectName("lineEdit_3_affil");
        lineEdit_3_affil->setGeometry(QRect(580, 10, 113, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 60, 80, 25));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 130, 131, 25));
        lineEdit_searchByName = new QLineEdit(centralwidget);
        lineEdit_searchByName->setObjectName("lineEdit_searchByName");
        lineEdit_searchByName->setGeometry(QRect(170, 130, 141, 25));
        label_searchOutput = new QLabel(centralwidget);
        label_searchOutput->setObjectName("label_searchOutput");
        label_searchOutput->setGeometry(QRect(30, 150, 201, 71));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 130, 131, 25));
        lineEdit_searchByAffiliation = new QLineEdit(centralwidget);
        lineEdit_searchByAffiliation->setObjectName("lineEdit_searchByAffiliation");
        lineEdit_searchByAffiliation->setGeometry(QRect(550, 130, 141, 25));
        label_searchOutput_2 = new QLabel(centralwidget);
        label_searchOutput_2->setObjectName("label_searchOutput_2");
        label_searchOutput_2->setGeometry(QRect(410, 160, 201, 21));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(410, 180, 161, 25));
        label_searchOutput_3 = new QLabel(centralwidget);
        label_searchOutput_3->setObjectName("label_searchOutput_3");
        label_searchOutput_3->setGeometry(QRect(580, 180, 191, 21));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 230, 711, 321));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setRowCount(100);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(220);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(35);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Affiliation", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search by name:", nullptr));
        label_searchOutput->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Affiliation Fee", nullptr));
        label_searchOutput_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Get number of Registered", nullptr));
        label_searchOutput_3->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Affiliation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
