#include "mainwindow.h"
#include "person.h"
#include "registration.h"
#include "studentregistration.h"
#include "guestregistration.h"
#include "registrationlist.h"
#include "registrationfactory.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    listReader = new RegistrationListReader(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    RegistrationFactory f;

    QString name = ui->lineEdit_name->text();
    QString email = ui->lineEdit_2_email->text();
    QString affiliation = ui->lineEdit_3_affil->text();

    newRegistrationList.addRegistration(f.create(name, affiliation, email));

    allRegistrations = newRegistrationList.getAllRegistrations();


    int row = 0;
    for (const Registration* reg : allRegistrations) {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(reg->getAttendee()->getName()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(reg->getAttendee()->getAffiliation()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(reg->getAttendee()->getEmail()));
        ++row;
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

    ui->label_searchOutput_3->setText(totalRegistered);
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Registration List"), "", tr("XML Files (*.xml);;All Files (*)"));

    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Cannot open file for writing: " << file.errorString();
        return;
    }

    RegistrationListWriter writer;
    QString xmlContent = writer.write(newRegistrationList);

    QTextStream out(&file);
    out << xmlContent;

    file.close();
}

void MainWindow::on_actionOpen_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select XML file", QDir::homePath(), "XML Files (*.xml)");

    if (!filePath.isEmpty()) {
        QList<Registration*> newRegistrations = listReader->readRegistrations(filePath);
        allRegistrations.append(newRegistrations);
    } else {
        qDebug() << "No file selected.";
    }


    int row = 0;
    for (const Registration* reg : allRegistrations) {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(reg->getAttendee()->getName()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(reg->getAttendee()->getAffiliation()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(reg->getAttendee()->getEmail()));
        ++row;
    }
}



