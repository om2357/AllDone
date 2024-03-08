#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter a number \n";
    int n;
    cin>>n;
    cout<<"your number is -> "<< n;
    
    switch (n)
    {
        case 0: cout<<"No";
        break;

        case 1: cout<< "Yes";
        break;

        default: cout<<"bye";
    }

}