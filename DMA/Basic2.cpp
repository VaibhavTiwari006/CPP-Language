#include <iostream>
#include <string>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the string " << endl;
    cin >> size;

    char* str = new char[size];

    cout << "Enter the string ";
    cin.ignore();
    cin.getline(str,size);

    cout << "You entered: " << str << endl;

    delete[] str;
    return 0;

}