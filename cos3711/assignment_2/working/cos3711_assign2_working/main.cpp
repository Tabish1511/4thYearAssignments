#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello from Tabish!";

    return a.exec();
}
