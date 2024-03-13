#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStyledItemDelegate>

class RatingDelegate : public QStyledItemDelegate
{
public:
    RatingDelegate(QObject *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionViewItem &option,
               const QModelIndex &index) const override;
};

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
    int rowCount;
};
#endif // DIALOG_H
