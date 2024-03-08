#include<iostream>
using namespace std;

int power(int a, int b)
    {
        int ans = 1;
        for(int i = 1; i <= b ; i ++){
            cout <<"ans value is ->"<<ans<<endl;
            cout <<"Value of a is ->"<<a<<endl;
            ans = ans * a;
        }
        return ans;
    }


int main()
{
    
    cout<<"Enter two number for power \n";
    int a, b;

    cin>>a>>b;
    cout<<power(a, b);
}