#include <iostream>
using namespace std;
int  sum(int a , int b ){
     int s = a + b;
     return s;
}
int minofTwo(int a ,int b ){
    if(a < b){ 
        return a ;
    }
    else{
    } return b;
        
}
int main(){
    cout << sum(10,5) << endl;
    cout << "min = >" << minofTwo(5,3) << endl;
    return 0;

}