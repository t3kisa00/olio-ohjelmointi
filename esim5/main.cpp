#include "person.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //Luodaan ns. automaattinen olio
    //tälläinen olio luodaan pinoon ja se tuhoutuu automaattisesti
    // Person objPerson; //Kutsutaan Person luokan muodostinta (Englanniksi Constructor eli luokan mudostin)
    // //Kun olio luodaan tällä tavalla niin se luodaan keno muistiin ja objPerson(.)
    // //on piste. Tälläinen olio tuhoutuu automaattisesti ja siksi kutsutaan automaattiseksi olioksi

    // objPerson.setName("Testi Teppo");
    // objPerson.setAge(24);
    // cout<<"Henkilon nimi on: "<<objPerson.getName()<<endl;
    // cout<<"Henkilon ika: "<<objPerson.getAge()<<endl;
    // objPerson.personInfo();

    // //Luodaan ns. dynaaminen olio
    // //tälläinen olio luodaan kekoon ja se täytyy tuhota itse
    // Person *objPerson2; //
    // objPerson2=new Person;
    // objPerson2->setName("Aino Joki");
    // objPerson2->setAge(22);
    // objPerson2->personInfo();
    // delete objPerson2;
    // objPerson2=nullptr; //Jos tätä ei tuhoa, niin muisti jää varatuksi


    //luodaan olio smart-pointterin avulla
    //Tälläinen olio luodaan kekoon ja se tuhoutuu automaattisesti

    unique_ptr<Person> objPerson3=make_unique<Person>();
    objPerson3->setName("Jorma Ankka");
    objPerson3->setAge(32);
    objPerson3->personInfo();


    return 0;
}
