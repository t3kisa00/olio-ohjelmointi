#include "Chef.h"

//Konstruktorin toteutus
Chef::Chef(const string& chefName) : name(chefName) {
    cout<<"Chef "<<name<< " konstruktori"<<endl;
}

//Destruktorin toteutus
Chef::~Chef() {
    cout<<"Chef "<<name<<" destruktori" << endl;
}

//Jäsenfunktioiden toteutus
void Chef::makeSalad() {
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup() {
    cout<<"Chef "<<name<<" makes soup"<< endl;
}
