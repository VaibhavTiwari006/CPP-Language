#include <iostream>
using namespace std;
float calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}
int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    int marks[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }
    int maxMarks = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > maxMarks) {
            maxMarks = marks[i];
        }
    }

    float average = calculateAverage(marks, n);

    cout << "\nAverage Marks: " << average << endl;
    cout << "Highest Marks: " << maxMarks << endl;


    if (average >= 40) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}