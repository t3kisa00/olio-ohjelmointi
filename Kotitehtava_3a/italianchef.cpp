#include "ItalianChef.h"

//Konstruktorin toteutus
ItalianChef::ItalianChef(const string& chefName) : Chef(chefName) {
    cout<< "ItalianChef "<<name<< " konstruktori"<<endl;
}

//Destruktorin toteutus
ItalianChef::~ItalianChef() {
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}

//Uudet jäsenfunktiot
void ItalianChef::makePasta() {
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}

string ItalianChef::getName() {
    return name;
}
