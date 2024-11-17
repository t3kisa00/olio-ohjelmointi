 #include "student.h"

string Student::getFname() const
{
    return fname;
}

void Student::setFname(const string &newFname)
{
    fname = newFname;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

string Student::getEmail() const
{
    return email;
}

void Student::setEmail(const string &newEmail)
{
    email = newEmail;
}

void Student::studentInfo()
{
    cout<<"Opiskelijan tiedot"<<endl;
    cout<<"Nimi="<<fname<<" "<<name<<endl;
    cout<<"Email="<<email<<endl;
    cout<<"------------------"<<endl;
}

Student::Student()
{

}

Student::Student(string fn, string nn, string em)
{
    fname=fn;
    name=nn;
    email=em;


}
