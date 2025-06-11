#include "viewmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    viewMain w;
    w.show();
    return a.exec();
}
