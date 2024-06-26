#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "registrationlist.h"
#include "registrationlistwriter.h"
#include "registrationlistreader.h"

#include <QMainWindow>
#include <QFileDialog>

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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    RegistrationList newRegistrationList;
    QList<Registration*> allRegistrations;
    RegistrationListReader *listReader;
};
#endif // MAINWINDOW_H
