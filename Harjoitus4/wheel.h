#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel {
private:
    int size;
    std::string type;

public:
    Wheel(); //Oletuskonstruktori
    Wheel(int s, std::string t);
    int getSize() const; //Getter koon
    void setSize(int s); //Setter koon
    std::string getType() const; //Getter tyypin
    void setType(std::string t); //Setter tyypille
};

#endif
