#include<iostream>
using namespace std;
void goHome(int dest, int src)
{
    if(src == dest)
    {
        cout<<src;
        cout<<"Maa phunch gya maa"<<endl;
        return;
    }

    src ++; 
    goHome(dest, src);
}
int main()
{
    int dest = 10;
    int src = 1;

    goHome(dest, src);
    return 0;
}