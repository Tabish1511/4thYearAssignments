#include <QCoreApplication>
#include <QObject>
#include <iostream>
#include <string>
#include "review.h"
#include "reviews.h"

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

    Reviews reviews(nullptr);
    Review* revP;

    revP = new Review("Tabish");
    reviews.addToList(revP);

    revP = new Review("Ahmed");
    reviews.addToList(revP);

    revP = new Review("Rabia");
    reviews.addToList(revP);

    revP = new Review("Zaviar");
    reviews.addToList(revP);

    cout << reviews.getList().toStdString() << endl;
}
