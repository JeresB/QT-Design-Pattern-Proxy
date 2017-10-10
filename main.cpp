#include "imageproxywindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageProxyWindow w;
    w.show();

    return a.exec();
}
