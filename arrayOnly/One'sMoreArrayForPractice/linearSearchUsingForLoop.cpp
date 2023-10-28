#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    cout<<"enter the size of array -> \n"<<endl;
    int num, key;
    int ans = -1;
    cin>> num;
    cout<<"enter the key for searching -> "<<endl;
    cin >> key;
    cout<<"enter The Array element -> "<<endl;

    for(int i = 0; i < num ;i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0; i < num; i++)
    {
        // cout<<arr[i]<<" ";  
        if(arr[i] == key)
        {
            arr[i] == ans;
        }
    }
    cout<<"Your element is found at -> "<<ans<<endl;
    
    return 0;
}
