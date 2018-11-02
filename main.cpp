#include "singlishmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SinglishMain w;
    w.show();

    return a.exec();
}
