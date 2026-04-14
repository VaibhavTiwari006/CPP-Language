#include <iostream>
using namespace std;

class Vehicle{
    public :
    void fuelType(){
        cout << "Original vehicle fuel type" << endl;
    }
};

class Car : public Vehicle{
    public :
    void fuelType(){
        cout << "Car uses petrol" << endl;
    }
};

class Bike : public Vehicle{
    public :
    void fuelType(){
        cout << "Bike uses Diesel" << endl;
    }
};

int main(){
    Car c;
    Bike b;
    c.fuelType();
    b.fuelType();
}