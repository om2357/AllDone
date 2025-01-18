#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your Name For reverse "<<endl;
    cin>> name;

    int length = name.length();
    string reverse = " ";
    
    for(int i = length - 1; i>= 0; i--)
    {
        reverse = reverse + name[i];
    } 
    cout<< "Your Reverse name is --> "<<reverse;
}