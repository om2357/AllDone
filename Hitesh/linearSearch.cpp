#include<iostream>
using namespace std;
bool found(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size;
    int key;
    cout<<"Enter the value of size --> ";
    cin>>size; 
    cout<<"Enter the value of key -->  ";
    cin>>key;
    int arr[size];
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    bool search = found(arr, size, key);
    
    if(search)
    {
        cout<<"your value is present"<<endl;
    }
    else{
        cout<<"Your value is not present "<<endl;
    }

    return 0;
}