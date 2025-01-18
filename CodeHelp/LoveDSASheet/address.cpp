#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<*ptr;
    int b = 100;
    int *p = &b;
    cout<<"Value of p -> "<<p;
}