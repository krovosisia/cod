#include "work.h"

work::work(QObject *parent) :
    QObject(parent)
{
}

int work::vid(int a, int b)
{
    return (a-b);
}
