#include "mainwindow.h"
#include "person.h"
#include "./ui_mainwindow.h"

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
    QString name = ui->lineEdit_name->text();
    QString email = ui->lineEdit_2_email->text();
    QString affiliation = ui->lineEdit_3_affil->text();

    Person newPerson(name, affiliation, email);

    qDebug() << name << email << affiliation;

    qDebug() << newPerson.toString();
}
