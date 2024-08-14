#ifndef PRIMEFINDER_H
#define PRIMEFINDER_H

#include <QThread>
#include <QList>

class PrimeFinder : public QThread
{
    Q_OBJECT

public:
    PrimeFinder(int start, int end, QObject *parent = nullptr);

    void run() override;

signals:
    void primesFound(const QList<int> &primes);

private:
    bool isPrime(int number);

    int m_start;
    int m_end;
};

#endif // PRIMEFINDER_H
