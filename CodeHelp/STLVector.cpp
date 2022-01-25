//vector template, ... in Stander Template Library
//vector is dynamic array 
//in the vector , if array size is 5 and we put the 6th element then (read next line)
//vector will automatically double
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>ve;
    cout<<"Capacity --> "<<ve.capacity()<<endl;

    

    return 0;
}