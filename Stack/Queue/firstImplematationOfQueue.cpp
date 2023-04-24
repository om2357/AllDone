//Queue follow only FIFO order this is called -> FIFO (First in first out)

#include<iostream>
using namespace std;
#include<queue>
int main()
{
    int data;
    queue <int> om;
    om.push(33);
    om.push(45);
    om.push(11);
    om.push(56);
    om.push(81);
    while(! om.empty())
    {
        cout<<om.front();
        
    }
    return 0;
}