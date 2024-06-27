#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "hello from new Tabish";

    return a.exec();
}
