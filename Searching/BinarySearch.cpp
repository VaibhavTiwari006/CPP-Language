#include <iostream>
using namespace std;
int main(){
    int n,ele;
    bool found=false;
    cout << "Enter size of array"<< endl;
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements" << endl;
    for(int i =0 ; i< n; i++){
        cin >> arr[i];
    }
     cout << "Enter element to find "<< endl;
    cin >> ele;
    int lb=0, ub=n-1;
    while( lb <= ub ){
       int mb = (lb+ub)/2;
        if(ele == arr[mb]){
            cout << "Element found at index : "<< mb<< endl;
            found = true;
            break;
        }
        else if( ele < arr[mb]){
            ub=mb-1;
        }
        else{
            lb = mb+1;
        }
    }
    if(!found){
        cout << "Not found";
    }
}