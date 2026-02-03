#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int petrol[3] = {1, 10 , 3};
    int dis[3] = {5 ,3 ,4};
    int balance = 0;
    int shortage = 0;
    int start = 0;
    for(int i = 0 ; i < n ; i ++){
        balance += petrol[i] - dis[i];
        if(balance < 0){
            shortage += balance;
            balance = 0;
            start = i+1; 
        }
    }
        if (balance + shortage >= 0)
        cout << "Start from " << start;
    else
        cout << "No possible tour";
    return 0;
}