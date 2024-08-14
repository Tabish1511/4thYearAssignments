#include "mainwindow.h"
#include "primefinder.h"
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
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();


    int start = ui->spinBox->value();
    int end = ui->spinBox_2->value();
    int thread_number = ui->spinBox_3->value();

    if (thread_number > 4) thread_number = 4;
    int range = (end - start + 1);

    int chunk_size = range / thread_number;

    QList<QLineEdit*> outputLines = { ui->lineEdit, ui->lineEdit_2, ui->lineEdit_3, ui->lineEdit_4 };

    for (int i = 0; i < thread_number; ++i) {
        int chunk_start = start + i * chunk_size;
        int chunk_end = (i == thread_number - 1) ? end : chunk_start + chunk_size - 1;

        PrimeFinder *finder = new PrimeFinder(chunk_start, chunk_end, this);

        connect(finder, &PrimeFinder::primesFound, this, [=](const QList<int> &primes) {
            QString primesString;
            for (int prime : primes) {
                primesString += QString::number(prime) + " ";
            }
            if (i < outputLines.size()) {
                outputLines[i]->setText(primesString.trimmed());
            }
        });

        finder->start();
    }

}

