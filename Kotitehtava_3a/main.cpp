#include <iostream>
#include "chef.h"
#include "italianChef.h"

using namespace std;

int main() {
    /* Chef olio
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();*/

    //ItalianChef  olio
    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    cout<<"name of the Italian Chef is "<<italianChef.getName()<<endl;

    return 0;
}
