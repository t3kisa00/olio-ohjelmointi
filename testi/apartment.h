#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment
{
private:
    int numOfTenants;
    int area;
public:
    Apartment(int numOfTenants, int area) : numOfTenants(numOfTenants), area(area) {}
    int heatingCost() const { return numOfTenants * area;}
};

#endif // APARTMENT_H

