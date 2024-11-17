#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;
public:
    void setBrand(const string& brand);
    void setModel(const string& model);
    void setYearModel(int yearModel);
    void printData() const;
};

#endif // CAR_H
