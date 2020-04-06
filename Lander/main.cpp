#include <QApplication>

#include "landerwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LanderWindow window;
    window.show();
    return a.exec();
}
