#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the number of elements" << endl;
    cin >> n;

    // Dynamically allocate memory
    int* arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;
    return 0;
}