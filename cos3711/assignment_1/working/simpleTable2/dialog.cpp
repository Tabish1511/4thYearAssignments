#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStandardItemModel(20, 4, this);

    QStringList hLabels;
    hLabels << "Composer" << "Album Title" << "Replacement Cost" << "Rating";
    // ui->tableView->setHorizontalHeaderLabels(hLabels);

    for(int col = 0; col < hLabels.size(); ++col) {
        model->setHeaderData(col, Qt::Horizontal, hLabels[col]);
    }

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    for(int row=0; row < 20; row++){
        for(int col=0; col < 4; col++){
            QModelIndex index = model->index(row, col, QModelIndex());

        }
    }

    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}
