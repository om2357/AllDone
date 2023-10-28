#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, c;

    cin>>a;
    cin>>b;
    
    int length1, lenght2;
    
    length1 = a.size();
    lenght2 = b.size();
    
    cout<<length1<<" ";
    cout<<lenght2<<endl;
    
    c = a + b;
    
    cout<<c<<endl;
    
    string swapped1 = b[0] + a.substr(1);
    string swapped2 = a[0] + b.substr(1);
    
    cout<<swapped1<<" "<<swapped2<<endl;
    
    
    return 0;
}
