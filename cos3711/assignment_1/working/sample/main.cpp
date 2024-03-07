#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace std;

void do_cpp(){
    string name = "Tabish";
    cout << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // add code here
    // do_cpp();
    cout << "Tabish";

    return a.exec();
}
