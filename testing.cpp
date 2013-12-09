#include "testing.h"
#include <QTest>
#include "work.h"
testing::testing(QObject *parent) :
    QObject(parent)
{
}

void testing::testWorkMethods()
{
        work obj;
        QCOMPARE(obj.vid(5,2), 3);

}
