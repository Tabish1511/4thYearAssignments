#include "dialog.h"
#include "./ui_dialog.h"
#include "software.h"
#include "reviews.h"
using namespace std;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_addButton_clicked()
{
    QString text = ui->lineEdit->text();
    QDate date = ui->dateEdit->date();
    bool recommend = ui->checkBox->isChecked();


    softwareP = new Software(text, date, recommend);
    reviews.addToList(softwareP);

    // Clear input values for next input
    ui->lineEdit->clear();
    ui->dateEdit->setDate(QDate::currentDate()); // Set to current date or any default date
    ui->checkBox->setChecked(false); // Uncheck the checkbox
}


void Dialog::on_pushButton_clicked()
{
    reviews.getList();
    QString userInput = reviews.displayReviews();
    reviews.clearList();

    ui->userInputBlock->setText(userInput);
}

