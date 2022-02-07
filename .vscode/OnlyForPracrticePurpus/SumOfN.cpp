#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your value of n\n";
    cin>>n;
    int sum = 0;
    for(int i = 0 ; i<= n ;i++)
    {
        sum= sum + i;
        
    }
    cout<<sum;

    return 0;
}