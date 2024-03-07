#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace  std;

void do_cpp(){
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "\n";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Do code here
    do_cpp();


    // return a.exec();
}
