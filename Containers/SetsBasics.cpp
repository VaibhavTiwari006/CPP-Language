#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> s;
    int key;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    cout << "set elements are :";
    for(int x : s){
        cout << x << " ";
    }

    s.erase(30);
    cout << "\n After erase ";
    for(int x : s){
        cout << x << " ";
    }
    cout << "\nEnter element to found" << endl;
    cin >> key;

    if(s.find(key)!= s.end())
    {
        cout << "\nElement found" << endl;
    }
    else{
        cout << "\nNot found" << endl;
    }   
}