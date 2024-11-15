#include "person.h"

int Person::getAge() const
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}

string Person::getName() const
{
    return name;
}

void Person::setName(const string &newName)
{
    name = newName;
}

void Person::personInfo()
{
    cout<<"----------------"<<endl;
    cout<<"Henkilon nimi on="<<name<<endl;
    cout<<"Henkilon ika on="<<age<<endl;
    cout<<"----------------"<<endl;
}

Person::Person() //Ainakun luodaan olio, niin tätä muodostinta kutsutaan
{
    cout<<"Person olio luotiin"<<endl;
}
Person::~Person() //tilde merkki "~" käytetään tuhoamisessa
{
    cout<<"Person olio tuhottiin"<<endl;
}
