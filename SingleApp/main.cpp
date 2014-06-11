#include <QCoreApplication>
#include "singleapp.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SingleApp app(argv[0]);
    if (app.IsAlreadyRunning())
    {
        qDebug("%s is already running!", argv[0]);
        return 1;
    }

    return a.exec();
}
