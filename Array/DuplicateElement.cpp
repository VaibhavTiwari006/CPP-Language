#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "enter length of array" << endl;
    cin >> len;

    int arr[len];

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                // shift elements left
                for (int k = j; k < len - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                len--;   // reduce size AFTER shifting
                j--;     // recheck current index
            }
        }
    }

    // print updated array
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}