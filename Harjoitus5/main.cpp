#include "assosiationa.h"
#include "classb.h"
#include "aggregationa.h"

#include <iostream>
using namespace std;

int main() {
    //Muuttujat a ja b
    int a = 5;
    int b = 10;

    //Tulostetaan a:n ja b:n arvot ja osoitteet
    cout<< "a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<< "b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;

    //Osoitinmuuttuja myPointer
    int* myPointer = &a;

    //Tulostetaan osoittimen osoittama muistipaikan osoite ja sisältö
    cout<<"\nPointterin osoittama osoite on: " <<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;

    //Vaihdetaan myPointer osoittamaan b:n osoitteeseen
    myPointer = &b;

    //Tulostetaan osoittimen osoittama muistipaikan osoite ja sisältö
    cout<<"\nPointterin osoittama osoite on: " <<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;

    //Referenssi refA
    int& refA = a;

    //Tulostetaan refA:n osoittama osoite ja sisältö
    cout<< "\nrefA osoittaa osoitteeseen on: "<<&refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<refA<<endl;

    cout<<"\n\n***********************************"<<endl;


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;


    cout<<"\nAggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}

