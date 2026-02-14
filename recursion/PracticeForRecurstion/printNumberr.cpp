#include <iostream>
using namespace std;

int printNum(int number)
{
    if(number == 0)
    return 1;
    cout<< number;
    printNum(number - 1);
    cout<<" ";
    cout << number;
    
}
int main()
{
    int number;
    cin >> number;

    printNum(number);
}