#include <iostream>
#include <student.h>

using namespace std;

int main()
{
    Student *objStudent1=new Student;
    objStudent1->setFname("Jager");
    objStudent1->setName("Maister");
    objStudent1->setEmail("Jager.maister@testi.moe");

    Student *objStudent2=new Student("Teppo","Testi","teppo.testi@testimail.com");

    objStudent1->studentInfo();
    objStudent2->studentInfo();

    delete objStudent1;
    objStudent1=nullptr;
    delete objStudent2;
    objStudent2=nullptr;

    return 0;
}
