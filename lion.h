#ifndef LION_H
#define LION_H

#include <QObject>
#include <QDebug>
#include "feline.h"

class lion : public feline
{
    Q_OBJECT
public:
    explicit lion(QObject *parent = nullptr);

    void speak();

signals:

public slots:
};

#endif // LION_H
