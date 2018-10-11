#include "lion.h"

lion::lion(QObject *parent) : feline(parent)
{

}

void lion::speak()
{
    qInfo() << "ROAR!!!!";

    //call the function from the base class
    feline::speak();

}
