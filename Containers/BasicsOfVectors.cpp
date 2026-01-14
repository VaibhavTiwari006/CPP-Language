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
    cout << "\nCapacity :" << v.capacity();
    cout << "\nFront element  :" << v.front();
    cout << "\nBack element  :" << v.back();

    // to insert the element at the 2nd position
    v.insert(v.begin()+1 , 15);
    cout << "\nAfter insertion :";
    for(int x : v){
        cout << x <<" ";
    }

    // to erase element at 3rd position
    v.erase(v.begin()+2);
    cout << "\nAfter deletion :";
    for(int x : v){
        cout << x <<" ";
    }

    //to pop last element 
    v.pop_back();

    cout << "\nAfter pop back :";
    for(int x : v){
        cout << x <<" ";
    }
}