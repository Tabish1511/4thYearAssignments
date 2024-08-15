#ifndef DIALOG_H
#define DIALOG_H
#include "software.h"
#include "reviews.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_addButton_clicked();

    void on_displayButton_clicked();

private:
    Ui::Dialog *ui;
    Software* softwareP;
    Reviews reviews;
};
#endif // DIALOG_H
