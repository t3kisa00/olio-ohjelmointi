#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(); // Oletuskonstruktori
    Engine(int hp, double disp);
    int getHorsepower() const; //Getter hevosvoimille
    void setHorsepower(int hp); //Setter hevosvoimille
    double getDisplacement() const; //Getter tilavuudelle
    void setDisplacement(double disp); //Setter tilavuudelle
};

#endif
