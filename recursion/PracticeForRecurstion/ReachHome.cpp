#include<iostream>
using namespace std;
void reachHome(int sourse, int des)
{
    if(sourse == des)
    
        cout << "Phunch gaya";
        return;
    
        sourse + 1,
        reachHome(sourse + 1, des);
        //cout<< "reached home";
}
int main()
{
    int des;
    cin>> des;
    int sourse = 1;
    reachHome(sourse, des);
}