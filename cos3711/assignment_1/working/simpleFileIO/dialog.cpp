#include "dialog.h"
#include "./ui_dialog.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QRegularExpression>
#include <QTextCursor>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", QDir::currentPath());
    QFile file(file_name);

    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Error", "Could not open file!");
        return;
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);

    // Perform regular expression search and highlight email addresses
    QTextDocument* document = ui->plainTextEdit->document();
    QTextCursor cursor(document);

    QRegularExpression emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}\\b");
    QRegularExpression phoneRegex("\\b(?:\\d{10}|\\(\\d{3}\\) ?\\d{3}-\\d{4})\\b");

    // Highlight email addresses
    while (!cursor.isNull() && !cursor.atEnd()) {
        cursor = document->find(emailRegex, cursor);
        if (!cursor.isNull() && !cursor.atEnd()) {
            int start = cursor.position();
            int end = start + cursor.selectedText().length();
            QTextCharFormat format;
            format.setFontWeight(QFont::Bold);
            cursor.setPosition(start, QTextCursor::MoveAnchor);
            cursor.setPosition(end, QTextCursor::KeepAnchor);
            cursor.mergeCharFormat(format);
        }
    }

    // Highlight phone numbers
    cursor.setPosition(0);
    while (!cursor.isNull() && !cursor.atEnd()) {
        cursor = document->find(phoneRegex, cursor);
        if (!cursor.isNull() && !cursor.atEnd()) {
            int start = cursor.position();
            int end = start + cursor.selectedText().length();
            QTextCharFormat format;
            format.setFontWeight(QFont::Bold);
            cursor.setPosition(start, QTextCursor::MoveAnchor);
            cursor.setPosition(end, QTextCursor::KeepAnchor);
            cursor.mergeCharFormat(format);
        }
    }
}
