#include <iostream>
using namespace std;

class Father{
    public :
    void tall(){
        cout << "Got height form Father" << endl;
    }
};

class Mother{
    public :
        void intelligence(){
            cout << "Got intelligience from Mother" << endl;
        }
};

class Child : public Father , public Mother{
    public :
    void mySkill(){
        cout << "Childs own skill" << endl;
    }
};

int main(){
    Child c;
    c.tall();
    c.intelligence();
    c.mySkill();
    return 0;
}