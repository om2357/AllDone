#include <iostream>
using namespace std;
int fact(int num){

    int fact = 1;

    for(int i = num ; i>=1 ; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    
    
    cout <<"Enter your number "<<endl;
    cin>>num;

    cout<<"your factorial of"<<num <<"--> "<<fact(num);
    
    return 0;
}