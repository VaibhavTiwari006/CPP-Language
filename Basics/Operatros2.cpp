#include <iostream>
using namespace std;
int main(){
    cout << (3 ^ 5) << endl; //XOR
    cout << (3 | 5) << endl; //Bitwise OR
    cout << (3 & 5) << endl; //Bitwise AND
    cout << (3 << 1) << endl; //Bitwise left shift
    cout << (3 >> 1) << endl; //Bitwise right shift

    cout << ((3 > 5) || (5 > 3)) << endl;
    cout << ((3 > 5) && (5 > 3)) << endl;
}