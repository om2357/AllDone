#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    return n = fibonacci(n - 1) +  fibonacci(n - 2);
}
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;

    cout<<fibonacci(n);


    return 0;
}