#include<iostream>
using namespace std;
int power(int num, int po)
{
    if(num == 0)
    return 1;

    int small = power(num - 1, po);
    int big = po * small;
    return big;
}

int main()
{
    int num, po;
    cout<< "enter number for power "<<endl;
    cin>> num;
    cout<< "enter number "<<endl;
    cin>> po;
    
    int ans = power(num, po);
    cout << "your power value is --> " << ans;
}