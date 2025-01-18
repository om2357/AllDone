#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array -> ";
    cin>>size;
    int arr[15];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i< size; i++)
    {
        // sum += arr[i];
        sum = arr[i] + sum;
    }
    cout<<"Your sum value is --> "<<sum;
    return 0;
}