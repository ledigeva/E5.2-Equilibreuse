#include "reglage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Reglage w;
    w.show();
    return a.exec();
}
