#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTableWidget>

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
    void on_addMusic_clicked();

private:
    Ui::Dialog *ui;
    QTableWidget *tableWidget;
};
#endif // DIALOG_H
