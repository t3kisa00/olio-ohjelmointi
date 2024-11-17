#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>


using namespace std;

class Vehicle {
private:
    int speed;
    string name;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void setName(const string& n) {
        name = n;
    }

    int getSpeed() const {
        return speed;
    }

    string getName() const {
        return name;
    }
};

#endif // VEHICLE_H
