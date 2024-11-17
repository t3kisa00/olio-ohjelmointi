#ifndef CAR_H
#define CAR_H
#include<iostream>

using namespace std;

class Car {
private:
    string brand;   // Auton merkki
    string model;   // Auton malli
    int yearModel;  // Auton valmistusvuosi

public:
    // Konstruktori joka alustaa jäsenmuuttujat
    Car(string b, string m, int y);

    // Metodi auton tietojen tulostamiseen
    void printData() const;
};

#endif // CAR_H
