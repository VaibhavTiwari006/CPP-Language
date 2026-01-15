#include <iostream>
#include <vector>
using namespace std;
void reverseVector(vector<int> &v)
{
    int start = 0, temp;
    int end = v.size() - 1;
    while (start < end)
    {
        temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    vector<int> v;
    int n, x;
    cout << "Enter the number of  elements into the vector :";
    cin >> n;

    cout << "Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    reverseVector(v);

    for (int x : v)
    {
        cout << x << " ";
    }
}