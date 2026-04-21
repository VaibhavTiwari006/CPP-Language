#include <iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    int marks;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main(){
    Student* s = new Student[5];

    cout << "Enter details of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < 5; i++) {
        s[i].display();
    }

    // Free memory
    delete[] s;
    return 0;
}