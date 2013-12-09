#ifndef WORK_H
#define WORK_H

#include <QObject>

class work : public QObject
{
    Q_OBJECT
public:
    explicit work(QObject *parent = 0);

signals:

public slots:
    int vid(int a, int b);
};

#endif // WORK_H
