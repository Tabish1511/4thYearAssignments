#include <QCoreApplication>
#include <iostream>
#include <string>
#include "review.h"

using namespace std;

// void do_cpp(){
//     string name;
//     cout << "Please enter your name: ";
//     getline(cin, name);
//     cout << "Hello " << name << "\n";
// }

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Review review("Sony");

    review.getName();

    // return a.exec();
}
