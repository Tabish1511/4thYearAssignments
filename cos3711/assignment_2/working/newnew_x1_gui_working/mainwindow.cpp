#include "mainwindow.h"
#include "person.h"
#include "registration.h"
#include "studentregistration.h"
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

    if(affiliation == "student"){
        registrationPtr = new StudentRegistration(personPtr, "Bachelors");
    }else{
        registrationPtr = new Registration(personPtr);
    }

    newRegistrationList.addRegistration(registrationPtr);

    QList<Registration*> allRegistrations = newRegistrationList.getAllRegistrations();
    for (Registration* reg : allRegistrations) {
        qDebug() << reg->toString();
    }

}
















// Registration *registrationPtr = new Registration(personPtr);

// bool didAdd = newRegistrationList.addRegistration(registrationPtr);

// qDebug() << personPtr->toString();
// qDebug() << registrationPtr->toString();
// qDebug() << registrationPtr->getBookingDate();
// qDebug() << registrationPtr->calculateFee();

// bool didAdd = newRegistrationList.addRegistration(registrationPtr);

// qDebug() << didAdd;
// qDebug() << newRegistrationList.totalRegistrations();
// qDebug() << newRegistrationList.totaltFee(affiliation);




