#include "ntiss.h"
#include <QApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ntiss w;
    w.show();
    return a.exec();
}
