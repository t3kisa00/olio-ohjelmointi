#include "rectangle.h"


void Rectangle::setWidth(double width) { this->width = width; }

void Rectangle::setHeight(double height) {
    this->height = height;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getCircum() const {
    return 2 * (width + height);
}

Rectangle::Rectangle() //Ainakun luodaan olio, niin tätä muodostinta kutsutaan
{
//    cout<<"Rectangle olio luotiin"<<endl;
}
Rectangle::~Rectangle() //tilde merkki "~" käytetään tuhoamisessa
{
  //    cout<<"Rectangle olio tuhottiin"<<endl;
}

