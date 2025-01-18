#include<iostream>
using namespace std;
int main()
{
    string name;
    cin >> name;
    int length = name.length();
    cout << length;

    string reverse = " ";
    for(int i = length - 1; i >= 0; i--)
    {
        reverse = reverse + name[i];
    }
    cout << reverse;
    return 0;
}