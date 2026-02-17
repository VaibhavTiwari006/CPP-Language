#include <iostream>
using namespace std;
int main(){
    int n ,temp;
    cout << "Enter number of elements in array" << endl;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        int flag = 0;
        for(int j = 0 ; j < n-1-i ; j++){ // -i because the last element is sorted with each loop
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){ // to avoid checking again if array is already sorted
            break;
        }
    }
    cout << "The sorted array is :" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}