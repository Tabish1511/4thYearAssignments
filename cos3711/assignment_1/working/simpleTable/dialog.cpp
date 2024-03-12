#include "dialog.h"
#include "./ui_dialog.h"
#include <QTableWidget>
#include <QTableWidgetItem>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    // tableWidget = new QTableWidget(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_addMusic_clicked()
{
    // Create a new item
    QTableWidgetItem *item = new QTableWidgetItem("Clicked!");

    // Insert the item into the first cell of the tableWidget
    ui->tableWidget->setItem(0, 0, item);
}


