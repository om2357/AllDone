#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    cout<<"Enter the size of array -> \n";
    int num;
    cin >> num;
    int sum = 0;
    cout<<"Enter the array value -> "<<endl;
    

    for(int i = 0; i< num; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i< num ;i++)
    {
        //sum = sum + arr[i];
        cout<<arr[i]<<" ";
        sum += arr[i];
        
    }
    cout<<endl;
    cout<<"Your total sum value is -> "<<sum<<endl;

    return 0;
}