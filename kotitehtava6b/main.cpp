#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass example;
    example.startToWait();  // Kutsutaan startToWait-metodia

    return a.exec();  // Käynnistetään Qt-tapahtumasilmukka
}
