#include <iostream>
using namespace std;
void printName(string name){
    cout<<" Myname Is "<< name;
}
int main()
{
    string name;
    getline(cin, name);
    printName(name);
    return 0;
}