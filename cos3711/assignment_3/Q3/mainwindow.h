#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    bool validateRule1(const QString &password);
    bool validateRule2(const QString &password);
    bool validateRule3(const QString &password);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
