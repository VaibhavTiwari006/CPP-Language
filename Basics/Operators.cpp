#include <iostream>
using namespace std;
int main(){
    int a = 5 , b = 10;
    cout << "Sum =" << (a+b) << endl;
    cout << "Differnece =" << (b-a) << endl;
    cout << "Product =" << (a*b) << endl;
    cout << "Division =" << (b/a) << endl;

    cout << (3 > 5) << endl; //true 1
    cout << (5 / 3) << endl; //false 0

    cout << ((3 > 5) || (5 > 3)) << endl;
    cout << ((3 > 5) && (5 > 3)) << endl;
}