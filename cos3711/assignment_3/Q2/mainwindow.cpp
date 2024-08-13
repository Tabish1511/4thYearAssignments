#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "book.h"
#include "bookwriter.h"

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
    QString title = ui->lineEdit->text();
    QString authors = ui->lineEdit_2->text();
    QString isbn = ui->lineEdit_3->text();
    QString pubDate = ui->dateEdit->text();

    Book book1(title, QStringList{authors}, isbn, QDate::fromString(pubDate, "d/MM/yyyy"));

    BookWriter writer(&book1);

    writer.saveBook();
}

