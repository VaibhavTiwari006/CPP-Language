#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    //cout << "Enter the elements in the vector";
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << "vector elements are :";
    for(int x : v){
        cout << x <<" ";
    }
    cout << "\nSize :" << v.size();
    cout << "\nCapacity :" << v.capacity(); //Capacity :4

    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);



    cout << "\nCapacity :" << v.capacity(); //Capacity :16

}
  