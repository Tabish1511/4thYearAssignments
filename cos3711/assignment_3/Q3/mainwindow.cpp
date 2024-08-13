#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString password = ui->lineEdit->text();

    if(ui->checkBox->isChecked()){
        if (validateRule1(password)) {
            QMessageBox::information(this, "Validation", "Password is valid according to Rule 1.");
        } else {
            QMessageBox::warning(this, "Validation", "Password does not meet Rule 1 requirements.");
        }
    } else if(ui->checkBox_2->isChecked()){
        if (validateRule2(password)) {
            QMessageBox::information(this, "Validation", "Password is valid according to Rule 2.");
        } else {
            QMessageBox::warning(this, "Validation", "Password does not meet Rule 2 requirements.");
        }
    } else if(ui->checkBox_3->isChecked()){
        if (validateRule3(password)) {
            QMessageBox::information(this, "Validation", "Password is valid according to Rule 3.");
        } else {
            QMessageBox::warning(this, "Validation", "Password does not meet Rule 3 requirements.");
        }
    } else {
        QMessageBox::warning(this, "Validation", "Please select a rule to validate the password.");
    }
}

bool MainWindow::validateRule1(const QString &password)
{
    return password.length() >= 5 && !password.contains(' ');
}

bool MainWindow::validateRule2(const QString &password)
{
    if (password.length() != 5)
        return false;

    QChar thirdChar = password[2];
    return thirdChar.isDigit() || (thirdChar >= 'a' && thirdChar <= 'f') || (thirdChar >= 'A' && thirdChar <= 'F');
}

bool MainWindow::validateRule3(const QString &password)
{
    QRegularExpression rx("^([1-9][0-9]{3,5})$");
    return rx.match(password).hasMatch();
}
