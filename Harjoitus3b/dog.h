#ifndef DOG_H
#define DOG_H

#include "Animal.h"
using namespace std;

//Dog luokka perii Animal luokan
class Dog : public Animal {
public:
    void callOut() const override; // Ylikirjoitettu metodi
};

#endif // DOG_H
