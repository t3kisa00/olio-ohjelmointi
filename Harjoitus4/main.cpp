#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    // Luo auto olion ja asettaa sen tiedot
    Car myCar("Toyota", "Corolla");

    myCar.setEngine();  // Asetetaan moottori
    myCar.setWheels();  // Asetetaan renkaat

    // Tulostetaan auton tiedot
    myCar.printDetails();

    return 0;
}
