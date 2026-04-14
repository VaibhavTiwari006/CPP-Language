#include <iostream>
using namespace std;

// Base class (Parent class)
class Vehicle {
public:
    int speed;  // data member to store speed
    // function to set speed
    void setSpeed(int s) {
        speed = s;
    }

    // function to display speed
    void showSpeed() {
        cout << "Speed: " << speed << endl;
    }
};

// Derived class (Child class) inheriting from Vehicle
class Car : public Vehicle {
public:
    string brand;  // additional data member for Car

    // function to display brand
    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c;  // creating object of Car class

    c.brand = "Toyota";   // accessing Car's own property
    c.setSpeed(120);      // accessing inherited function from Vehicle

    c.showBrand();        // calling Car's own method
    c.showSpeed();        // calling inherited method from Vehicle

    return 0;
}