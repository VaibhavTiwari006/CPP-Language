#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x,ele;
   // cout << "Enter number of elements into the vector :";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> x;
        v.push_back(x);
    }
   // cout << "Enter index of element to erase :";
    cin >> ele;
    if(ele >  0 && ele < v.size()){
        v.erase(v.begin()+ele);
    }
    for(int x : v){
        cout << x << " ";
    }
}