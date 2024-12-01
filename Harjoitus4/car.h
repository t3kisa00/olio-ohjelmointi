#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;

public:
    Car(); //Oletuskonstruktori
    Car(std::string b, std::string m);
    void setEngine(); //Asettaa moottorin arvot
    void setWheels(); //Asettaa renkaat
    void printDetails() const;
    //getter ja setter mallille
    std::string getModel() const;
    void setModel(std::string m);
    std::string getBrand() const;
    void setBrand(std::string b);
};

#endif
