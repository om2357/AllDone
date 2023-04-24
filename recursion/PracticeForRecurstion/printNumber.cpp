#include<iostream>
using namespace std;
int count(int num)
{
    if(num == 0)
    {
        return 0;
    }
    //cout<<num <<endl;
    count(num - 1);
    cout<<num <<endl;
}
int main()
{
    int num;
    cout<<"Enter the number for counting "<<endl;
    cin>>num;

    count(num);

    return 0;
}