#include<iostream>
using namespace std;

int functionFib(int number)
{
    if(number == 0)
    
        return 1;

    int smallProblem = functionFib(number - 1);
    int bigProblem = smallProblem * number;
    return bigProblem;  
    
}

int main()
{
    int number;
    cin >> number;
    functionFib(number);
    int ans = functionFib(number);
    cout<<ans;
}