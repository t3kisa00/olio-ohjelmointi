#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string fname;
    string name;
    string email;


public:
    //Tyhjä konstruktori
    Student();
    //Konstruktori joka ottaa parametrit
    Student(string, string, string);
    string getFname() const;
    void setFname(const string &newFname);
    string getName() const;
    void setName(const string &newName);
    string getEmail() const;
    void setEmail(const string &newEmail);

    void studentInfo();
};

#endif // STUDENT_H
