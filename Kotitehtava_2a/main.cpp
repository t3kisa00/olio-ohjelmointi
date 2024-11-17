#include <iostream>
#include <memory>
#include "rectangle.h"
#include "car.h"
#include "student.h"

using namespace std;

int main()
{   //Luodaan automaattinen olio pino muistiin, tuhoutuu automaattisesti
    Car objCar;
    objCar.setBrand("Lada");
    objCar.setModel("Samara");
    objCar.setYearModel(1989);
    objCar.printData();

    cout<<"------------------"<<endl;

    //Luodaan dynaaminen olio kekomuistiin ja tuhotaan itse
    Rectangle* objRectangle = new Rectangle();
    objRectangle->setWidth(7.5);
    objRectangle->setHeight(11.0);
    cout<<"Rectangle Area: " <<objRectangle->getArea()<<endl;
    cout<<"Rectangle Circumference: "<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;

    cout<<"------------------"<<endl;

    //Luodaan smart pointer olio kekoon ja se tuhoutuu automaattisesti
    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Taneli Taitaja");
    objStudent->setStudentNumber(000765432);
    objStudent->setAverage(3.8);
    cout<<"Student name: " <<objStudent->getName()<<endl;
    cout<<"Student number: " <<objStudent->getStudentNumber()<<endl;
    cout<<"Student average: " <<objStudent->getAverage()<<endl;

}
