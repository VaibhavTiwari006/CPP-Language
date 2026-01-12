#include <iostream>
using namespace std;
int main(){
    int len;
    cout << "enter length of array" << endl;
    cin >> len;
    int arr [len];
    for(int i = 0 ; i < len ; i++){
        cin >> arr[i];
    }
     // to print the updated arrray
    for(int i = 0 ; i < len ; i++){
        cout << arr[i] << " ";
    }   
    return 0;
}