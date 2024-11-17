#include "car.h"


void Car::setBrand(const string& brand) {
    this->brand = brand;
}

void Car::setModel(const string& model) {
    this->model = model;
}

void Car::setYearModel(int yearModel) {
    this->yearModel = yearModel;
}

void Car::printData() const {
    cout<<"Car Details:"<<endl;
    cout<<"Brand: "<< brand<< endl;
    cout <<"Model: "<< model<< endl;
    cout<<"Year: "<< yearModel<< endl;
}
