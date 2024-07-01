#include "mainwindow.h"
#include "person.h"
#include "registration.h"
#include "studentregistration.h"
#include "guestregistration.h"
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

    Registration *registrationPtr;

    if(affiliation == "student" || affiliation == "Student"){
        registrationPtr = new StudentRegistration(personPtr, "Bachelors");
    }else if(affiliation == "guest" || affiliation == "Guest"){
        registrationPtr = new GuestRegistration(personPtr, "VIP");
    }else {
        registrationPtr = new Registration(personPtr);
    }

    newRegistrationList.addRegistration(registrationPtr);

    allRegistrations = newRegistrationList.getAllRegistrations();
}


void MainWindow::on_pushButton_2_clicked()
{
    QString nameSearch = ui->lineEdit_searchByName->text();
    // ui->label_searchOutput->setText("No attendee found");

    for (Registration* reg : allRegistrations) {
        if (nameSearch == reg->getAttendee()->getName()) {
            ui->label_searchOutput->setText(reg->getAttendee()->toString());
            return;
        }else{
            qDebug() << "Not found yet...";
        }
    }























    // Registration* firstRegistration = allRegistrations[0];

    // // qDebug() << firstRegistration->getAttendee()->getName();

    // bool isSame = (nameSearch == firstRegistration->getAttendee()->getName());

    // qDebug() << isSame;
}






