#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

//Animal luokka, sisältää virtuaalisen metodin callOut
class Animal {
public:
    virtual ~Animal() = default;  // Virtuaalinen tuhoaja
    virtual void callOut() const; // Virtuaalinen metodi
};

#endif // ANIMAL_H
