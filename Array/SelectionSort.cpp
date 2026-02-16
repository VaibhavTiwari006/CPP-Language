#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout << "Enter length of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in the array " << endl;
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }
    for( int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The sorted array is  " << endl;
    for(int i = 0 ; i < n  ; i ++){
        cout << arr[i] << " ";
    }
}