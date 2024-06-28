#include "mainwindow.h"
#include "person.h"
#include "registration.h"
#include "registrationlist.h"
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

    Person *personPtr = new Person(name, affiliation, email);

    // Registration newRegistration(personPtr);

    Registration *registrationPtr = new Registration(personPtr);

    RegistrationList newRegistrationList(this);












    bool didAdd = newRegistrationList.addRegistration(registrationPtr);



    // qDebug() << personPtr->toString();
    // qDebug() << newRegistration.getAttendee()->toString();
    // qDebug() << newRegistration.toString();
    // qDebug() << registrationPtr->toString();




    qDebug() << didAdd;
    qDebug() << newRegistrationList.totalRegistrations();



}

