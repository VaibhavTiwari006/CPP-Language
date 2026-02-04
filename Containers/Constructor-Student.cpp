/**
 create a class student in which privaate data memebers are roll no , name , marks and total , and public memeber func are void set data use to attain the detail of a student and void display data to display the student detail
 */
#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    int marks[5];
    int total;
public:
    void setData() {
        total = 0;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name ;
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
            total += marks[i];
        }
    }
    void displayData() {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << total << endl;
    }
};
int main() {
    Student s;
    s.setData();
    s.displayData();
    return 0;
}