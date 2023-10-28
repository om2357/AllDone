#include <iostream>
using namespace std;
class stack
{
public:
    int top1;
    int top2;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element ;
        }
        else
        {
            cout << "Stack is overFlow" << endl;
        }
    }
    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "Second Stack is overflow " << endl;
        }
    }
    int pop1()
    {
        if(top1 >= 0)
        {
            return arr[top1];
            top1--;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if(top2 < size)
        {
            return arr[top2];
            top2 ++;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    stack st(4);
    st.push1(31);
    st.push2(22);
    st.push1(6);
    st.push1(5);
    cout<<"Your pop1 value is -> "<<st.pop1()<<endl;
    return 0;
}