#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    cout << "\nLength of first string: " << s1.length() << endl;
    cout << "Length of second string: " << s2.length() << endl;
    string combined = s1 + " " + s2;
    cout << "\nConcatenated string: " << combined << endl;
    if (s1 == s2) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}
