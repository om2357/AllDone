//reverse as string

#include<iostream>
using namespace std;
int main()
{
    string name;
    
    
    cout<<"Enter your name for reverse --> ";
    cin>>name;
    int length = name.length();
    cout<< length;
    string reverse =" ";

    for(int i = length; i >= 0; i--)
    {
        reverse = reverse + name[i];
    }
    cout <<"Your reverse string is --> "<<reverse;
}






















































































































































// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter your factorial number ->"<<endl;
//     cin>>num;
//     int fact = 1; 
//     for (int i = num ; i >= 1; i--)
//     {
//         fact = fact * i;
//     }
//     cout<<"Your factorial value is --> "<<fact;
// }