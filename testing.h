#ifndef TESTING_H
#define TESTING_H

#include <QObject>

class testing : public QObject
{
    Q_OBJECT
public:
    explicit testing(QObject *parent = 0);

signals:

private slots:
    void testWorkMethods();
public slots:

};

#endif // TESTING_H
