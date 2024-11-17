#ifndef MYCLASS_H
#define MYCLASS_H
#include<iostream>

class MyClass {
private:
    int number1;
    int number2;

public:
    int result;
    myClass();

    int calculateResult();
    void setNumber1(int newNumber1);
    void setNumber2(int newNumber2);
};

#endif // MYCLASS_H
