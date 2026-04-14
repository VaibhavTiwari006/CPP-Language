#include <iostream>
using namespace std;

class LivingBeing{
    public :
    void breathe(){
        cout << "breathing..." << endl;
    }
};

class Animal : public LivingBeing{
    public :
    void eat(){
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal{
    public :
    void bark(){
        cout << "Barking..." << endl;
    }
};

int main(){
    Dog d; // d is the object 
    d.breathe();
    d.eat();
    d.bark();
    return 0;
}