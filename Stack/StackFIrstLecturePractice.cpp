#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(32);
    st.push(311);
    st.push(21);
    cout<<st.top()<<endl;
    st.pop();
    cout<<"Top element is -> "<<st.top()<<endl;
    cout<<"Size of stack is -> "<<st.size()<<endl;
    



}