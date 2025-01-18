#include<iostream>
using namespace std;
int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // printArray(arr,size);
}

int printArray(int arr[], int size)
{
    for(int i = 0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[10];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value of Array --> ";

    for(int i = 0; i< size; i++)
    {
        cin>>arr[i];
    }
    reverse(arr, size);
    // cout<<"Your reversed Array is --> "<< 
    printArray(arr, size);
    




    return 0;
}