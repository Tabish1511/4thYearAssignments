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


void MainWindow::on_pushButton_3_clicked()
{
    QString affilSearch = ui->lineEdit_searchByAffiliation->text();

    QString affilOutput;

    // qDebug() << affilSearch;

    if(affilSearch == "Student" || affilSearch == "student"){
        affilOutput = "ZAR50.00";
    } else if(affilSearch == "Guest" || affilSearch == "guest"){
        affilOutput = "ZAR10.00";
    } else{
        affilOutput = "ZAR100.00";
    }

    ui->label_searchOutput_2->setText(affilOutput);
}








void MainWindow::on_pushButton_4_clicked()
{
    QString totalRegistered = QString("The total Registered: %1").arg(newRegistrationList.totalRegistrations());

    qDebug() << totalRegistered;

    ui->label_searchOutput_3->setText(totalRegistered);
}

