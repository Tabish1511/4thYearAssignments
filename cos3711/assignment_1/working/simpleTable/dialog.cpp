// dialog.cpp

#include "dialog.h"
#include "./ui_dialog.h"
#include <QSpinBox>
#include <QApplication>
#include <QPainter>

RatingDelegate::RatingDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
}

void RatingDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option,
                           const QModelIndex &index) const
{
    if (index.data(Qt::EditRole).canConvert<int>()) {
        int rating = index.data(Qt::EditRole).toInt();

        // Calculate the width of the bar based on the rating
        int barWidth = rating * 10; // Assuming each rating point corresponds to 10 pixels width

        // Draw the horizontal bar
        painter->fillRect(option.rect, Qt::green); // Fill background with light gray
        painter->fillRect(option.rect.adjusted(0, 0, -barWidth, 0), Qt::lightGray); // Draw the colored bar
    }
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    rowCount = 0;

    // Set the delegate for the rating column
    ui->tableWidget->setItemDelegateForColumn(3, new RatingDelegate(ui->tableWidget));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_addMusic_clicked()
{
    if (!ui->composerEdit->text().isEmpty() && !ui->albumEdit->text().isEmpty()) {

        qDebug() << rowCount;

        // Create a new item
        QTableWidgetItem *item1 = new QTableWidgetItem(ui->composerEdit->text());
        QTableWidgetItem *item2 = new QTableWidgetItem(ui->albumEdit->text());
        QTableWidgetItem *item3 = new QTableWidgetItem(ui->replacementSpinBox->text());
        QTableWidgetItem *item4 = new QTableWidgetItem(ui->ratingSpinBox->text());

        // Insert the items into the tableWidget
        ui->tableWidget->setItem(rowCount, 0, item1);
        ui->tableWidget->setItem(rowCount, 1, item2);
        ui->tableWidget->setItem(rowCount, 2, item3);
        ui->tableWidget->setItem(rowCount, 3, item4);

        // Check if replacementSpinBox value is greater than 200
        if(ui->replacementSpinBox->value() >= 200) {
            // Set background color for the cell
            item1->setData(Qt::BackgroundRole, QColor(Qt::red));
            item2->setData(Qt::BackgroundRole, QColor(Qt::red));
            item3->setData(Qt::BackgroundRole, QColor(Qt::red));
        }

        // Increment rowCount
        rowCount++;

        // Clear line edits and reset spin boxes
        ui->composerEdit->clear();
        ui->albumEdit->clear();
        ui->replacementSpinBox->setValue(0);
        ui->ratingSpinBox->setValue(0);

    } else {
        qDebug() << "LineEdit text was not entered.";
        ui->composerEdit->clear();
        ui->albumEdit->clear();
        ui->replacementSpinBox->setValue(0);
        ui->ratingSpinBox->setValue(0);
    }
}

