#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    cout<<"Enter the Size of Array\n";
    int num, maxNum, minNum;
    cin>>num;
    maxNum = 0;
    minNum = arr[0];
    cout<<"Enter the array value"<<endl;

    for(int i = 0; i<num ; i++)
    {
        cin>> arr[i];
    }
    for(int i = 0; i<num ; i++)
    {
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
        if(arr[i] < minNum)
        {
            minNum = arr[i];
        }
        cout<<arr[i]<<" ";
        
        
    }
    cout<<endl;
    cout<<"Your max num is -> "<<maxNum<<endl;
    cout<<"Your min num is -> "<<minNum<<endl;
    return 0;
}