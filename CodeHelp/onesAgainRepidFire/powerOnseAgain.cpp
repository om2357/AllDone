#include<iostream>
using namespace std;
int power(int a, int b)
{
    int pow = 1;
    for(int i = 1; i <= b; i++)
    {
        cout<< "Your pow value is --> "<<pow<<endl;
        cout<< "Your pow value is --> "<<a<<endl;
        pow = pow * a;
    }
    return pow;
    
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int answer = power(a, b);
    cout<< "your answer is -> "<< answer;

}