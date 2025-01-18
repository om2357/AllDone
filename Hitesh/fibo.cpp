#include<iostream>
using namespace std;

int main()
{
    int fib, n1 = 0, n2 = 1, n3;
    cout<< "Enter fibonaci number is --> ";
    cin>> fib;
    for(int i = 2; i < fib ; ++i)
    {
        n3 = n1 + n2;
        cout<< n3<< " ";
        n1 = n2;
        n2 = n3;
    }
    
}