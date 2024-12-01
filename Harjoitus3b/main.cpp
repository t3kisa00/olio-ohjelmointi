#include "Animal.h"
#include "Dog.h"
using namespace std;

int main() {
    //Luodaan Animal olio
    Animal* animal = new Animal();
    animal->callOut();

    //Luodaan Dog olio
    Animal* dog = new Dog(); // Polymorfinen osoitin
    dog->callOut();

    //Tuhotaan oliot
    delete animal;
    delete dog;

    return 0;
}
