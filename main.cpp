#include <QCoreApplication>
#include <QTest>
#include "testing.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testing tests;
    QTest::qExec(&tests, argc, argv);
    return a.exec();
}
