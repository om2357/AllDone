#include<iostream>
using namespace std;

int fact(int a)
{
    int fact = 1;
    for(int i = 1; i <= a ; i++)
    {
        //cout<<"value of ans -> "<<ans;
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int ans = fact(n);

    int deno =  fact(r) * fact(n - r);

    int answer = ans / deno;
}

int main()
{
    // int num;

    // int ans = fact(num);
    // cout<<"factorial of num -> "<<ans;
    cout<<nCr(8 ,2);
}