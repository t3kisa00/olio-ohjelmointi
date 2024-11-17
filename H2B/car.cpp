#include "car.h"

// Konstruktori joka alustaa jäsenmuuttujat
Car::Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

// Metodi auton tietojen tulostamiseen
void Car::printData() const {
    cout<<"Brand: "<<brand<<", Model: "<<model<<", Year: "<<yearModel<<endl;
}
