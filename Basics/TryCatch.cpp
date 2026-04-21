#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter two integers (numerator and denominator): "; 
    cin >> a >> b;

    try{
        if(b==0){
            throw "Error: Division by zero is not allowed!";
        }
        double result = (double)a/b;
        cout << "Result :" << result << endl;
    }
    catch(const char* msg){
        cout << msg << endl;
    }
    return 0;
}