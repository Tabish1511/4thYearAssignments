#include "primefinder.h"
#include <QDebug>

PrimeFinder::PrimeFinder(int start, int end, QObject *parent)
    : QThread(parent), m_start(start), m_end(end)
{
}

bool PrimeFinder::isPrime(int number)
{
    if (number < 2)
        return false;
    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void PrimeFinder::run()
{
    QList<int> primes;

    for (int i = m_start; i <= m_end; ++i)
    {
        if (isPrime(i))
        {
            primes.append(i);
        }
    }

    emit primesFound(primes);
}
