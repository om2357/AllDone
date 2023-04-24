#include<iostream>
using namespace std;
class stack
{
    public:

    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"stack is OverFlow"<<endl;
        }
    }
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"stack is UnderFlow"<<endl;
        }
    }
    
    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    stack st(5);
    st.push(21);
    st.push(211);
    st.push(642);
    st.push(94);
    st.push(231);
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    st.pop();
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    st.pop();
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    st.pop();
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    st.pop();
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    st.pop();
    cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    //st.pop();
    //cout<<"Your Stack top element is --> "<< st.peek()<<endl;
    cout<<st.isEmpty();
    if(st.isEmpty())
    {
        cout<<"Stack Is empty"<<endl;
    }
    else
    {
        cout<<"Stack is Not empty"<<endl;
    }



}