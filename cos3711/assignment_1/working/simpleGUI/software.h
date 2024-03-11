#ifndef SOFTWARE_H
#define SOFTWARE_H
#include <QDate>
#include <QObject>

class Software : public QObject
{
    Q_OBJECT
public:
    explicit Software(QObject *parent = nullptr);
    Software(QString nameP, QDate dateP, bool recommendP);
    QString getSoftware(); // <<== GET RID OF THIS MEMBER FUNCTION
private:
    QString name;
    QDate date;
    bool recommend;

signals:
};

#endif // SOFTWARE_H
