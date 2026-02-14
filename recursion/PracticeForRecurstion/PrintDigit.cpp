#include<iostream>
using namespace std;

void digit(int num, string arr[])
{
    if(num == 0)
        return;

    int n = num % 10;
    num = num / 10;

    digit(num, arr);
   // cout<< num;
    cout<<arr[n] << " ";


}
int main()
{
    int num;
    cin>> num;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    digit(num, arr);
}