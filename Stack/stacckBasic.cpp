#include <iostream>
using namespace std;
#include <stack>
int main()
{
    cout << "Enter the value of num -> " << endl;
    int n;
    cin >> n;
    int temp;
    int arr[20];
    stack<int> om;
    cout << "Enter the value of arr -> " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        // cout << "Upper output " << endl
        // <<
        // arr[num];
        om.push(arr[n]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout
    //     << arr[i]<<" ";
    // }
    // cout<<om.top();
    while (!om.empty())
    {
        temp = om.top();
        // cout<<om.top();
        om.pop();
        // cout<<om.top();
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp << endl;
    }
    return 0;
}