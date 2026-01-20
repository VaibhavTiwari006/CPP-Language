#include <iostream>
using namespace std;
int main(){
    int n; //length of an array
    cin >> n;
    int arr[n];
    for(int i = 0 ; i< n ;i++){
        cin >> arr[i];
    }
    int ele;
    bool found=false;
    cin >> ele; // element to find 
    for(int i= 0; i < n; i++){
        if(arr[i] == ele){
        found=true;
        break;
        }
    }
    if(found == true)
    cout << "Element found"<<  endl;
    else
    cout << "Element not found";
}