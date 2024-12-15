#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent)
{
    qDebug() << "Start";
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug() << "End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);  // Odotetaan 1 sekunti
    emit readyToSay();      // Lähetetään signaali readyToSay
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve";  // Tulostetaan "Terve"
}
