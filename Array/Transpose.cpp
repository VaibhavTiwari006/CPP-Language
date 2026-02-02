#include <iostream>
using namespace std;
int main()
{
    int ROW = 2, COL = 2;
    int arr1[ROW][COL];
    cout << "Enter elements in matrix:\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Transposed matrix is :\n";
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << arr1[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
