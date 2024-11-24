#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include <iostream>

#include "Chef.h"

using namespace std;

class ItalianChef : public Chef {
public:
    //Konstruktorit ja destruktori
    ItalianChef(const string& chefName);
    ~ItalianChef();

    //Uudet jäsenfunktiot
    void makePasta();
    string getName();
};

#endif // ITALIANCHEF_H
