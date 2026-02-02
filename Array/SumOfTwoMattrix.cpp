#include <iostream>
using namespace std;
int main()
{
    int ROW = 2, COL = 2;
    int arr1[ROW][COL];
    int arr2[ROW][COL];
    int sum[ROW][COL];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
