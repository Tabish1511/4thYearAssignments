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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
