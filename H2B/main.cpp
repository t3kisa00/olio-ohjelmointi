#include <iostream>
#include <vector>
#include"car.h"
using namespace std;

int main() {
    // Luodaan vektori joka sisältää Car-olioita
    vector<Car> carList;

    // Luo kolme oliota ja lisää ne listaan
    carList.push_back(Car("Lada", "Samara", 1989));
    carList.push_back(Car("Lada", "1200", 1988));
    carList.push_back(Car("Lada", "2105", 1989));

    // Tulostetaan listan toisen alkion tiedot
    cout << "Toinen auto listalla: ";
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot
    cout<<"\nKaikki autot listalla:"<<endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
