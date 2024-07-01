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

    for (Registration* reg : allRegistrations) {
        qDebug() << reg->getAttendee()->toString();
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QString nameSearch = ui->lineEdit_searchByName->text();

    for (Registration* reg : allRegistrations) {
        if (nameSearch == reg->getAttendee()->getName()) {
            StudentRegistration* studentReg = dynamic_cast<StudentRegistration*>(reg);
            if (studentReg) {
                ui->label_searchOutput->setText(studentReg->toString());
            } else {
                ui->label_searchOutput->setText(reg->toString());
            }
            return;
        } else {
            qDebug() << "Not found yet...";
        }
    }
}







