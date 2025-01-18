#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int z;
    x = 3;
    y = 4;
    z = ++x * y--;
    cout<<"value of x -> "<< x<<endl;
    cout<<"value of y -> "<<y<<endl;
    cout<<"value of z -> "<<z<<endl;
}
