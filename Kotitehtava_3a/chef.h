#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef {
protected:
    string name;

public:
    //Konstruktorit ja destruktori
    Chef(const string& chefName);
    virtual ~Chef();

    //Jäsenfunktiot
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
