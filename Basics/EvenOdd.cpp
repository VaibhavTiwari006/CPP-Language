#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number to ceck even or odd :\n";
    cin>>n;
    if( (n & 1) == 0) {
    cout << " even  \n";
    }
    else{
    cout << " odd \n";

    }
}