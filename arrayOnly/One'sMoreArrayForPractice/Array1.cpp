#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int num = 5;
    // cout<<"Enter the Array size -> \n";
    // cin >> num;
    cout<<"Enter the integer value -> \n";
    for(int i = 0; i<num; i++)
    {
        cin>>arr[i];
    }

    // for(int i = 0; i < num; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    int cnt = 0;
    for(int ele:arr)
    {
        cnt = 1;
        cout<<ele<<" ";
        
    }
    return 0;
}