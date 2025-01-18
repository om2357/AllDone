#include<iostream>
using namespace std;

int PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<"Your array value is --> "<<arr[i]<<endl;
    }
}
int main ()
{
    int arr[10];
    cout<<"Enter the value ofd array --> "<<endl;

    for (int i = 0; i<10; i++)
    {
        cout<<"value of i -> ";
        cin>>arr[i]; 
    }
    PrintArray(arr,10);

    return 0;
}