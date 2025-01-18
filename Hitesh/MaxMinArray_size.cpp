#include<iostream>
#include <climits>
using namespace std;

int Max(int num[], int n)
{
    int max = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(num[i] > max)
        max = num[i];
    }
    return max;
}
int Min(int num[], int n)
{
    int min = INT_MAX;
    for(int i = 0; i< n; i++)
    {
        if(num[i] < min)
        min = num[i];
    }
    return min;
}
int main()
{
    int arr[10];
    cout<<"Enter the size of Array -> "<<endl;

    int size;
    cin>>size;
    for(int i = 0; i<size; i++ )
    {
        cin>>arr[i];
    }

    cout<<"your Max Value is --> "<<Max(arr, size)<<endl;
    cout<<"your Mix Value is --> "<<Min(arr, size);

    return 0;
}