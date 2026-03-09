#include <iostream>
using namespace std;
// Base Class
class Student
{
public:
    string name;
    int roll_no;
    void getStudentInfo()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll_no;
    }
};
// Derived Class
class Result : public Student
{
public:
    int marks;
    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayReport()
    {
        if(marks > 40)
        {
            cout << "\n--- Student Report ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Roll No: " << roll_no << endl;
            cout << "Marks: " << marks << endl;
            cout << "Result: PASS" << endl;
        }
        else
        {
            cout << "\nStudent has FAILED." << endl;
        }
    }
};
int main()
{
    Result r;
    r.getStudentInfo();
    r.getMarks();
    r.displayReport();

    return 0;
}