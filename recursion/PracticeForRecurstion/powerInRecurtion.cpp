#include<iostream>
using namespace std;
int power(int pow, int num)
{
    if(pow == 0)
    {
        return 1;
    }
    int smallProblem = power(pow - 1, num);
    int bigProblem = num * smallProblem;
    return bigProblem;

}
int main()
{
    cout<<"Enter the data for power"<<endl;
    int pow, num;
    cin>> pow;
    cout<<"enter the number"<<endl;
    cin>>num;

    int ans = power(pow, num);
    cout<<ans;

    return 0;
}