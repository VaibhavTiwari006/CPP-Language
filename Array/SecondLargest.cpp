#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 9, 6, 4, 5, 6, 7, 8, 9, 3};
    int max = arr[0];
    int second_max = arr[1];
    if (second_max > max) {
        int temp = max;
        max = second_max;
        second_max = temp;
    }
    for (int i = 2; i < 10; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    cout << "Max is: " << max << endl;
    cout << "Second Max is: " << second_max << endl;
    return 0;
}
