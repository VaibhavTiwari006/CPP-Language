#include <iostream>
using namespace std;

class Shape{
    public:
    void draw ()
    {
        cout << "Drawing a shape " << endl;
    }
};

class Circle : public Shape {
    public :
    void area(){
        cout << "Area = pi * r  * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area = length * breadth" << endl;
    }
};

class Triangle : public Shape {
public:
    void area() {
        cout << "Area = 0.5 * base * height" << endl;
    }
};

int main(){
    Circle c;
    c.draw();
    c.area();

    Rectangle r;
    r.draw();
    r.area();

    Triangle t;
    t.draw();
    t.area();

    return 0;
}