#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int temp, x, n;
    vector<int> v;
    cout << "Enter number of elements into the array\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        }
    
    for(int x : v){
        cout  << x <<" ";
    }
}