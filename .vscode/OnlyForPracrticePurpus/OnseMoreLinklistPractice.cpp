#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* next;

    node(int data)
    {
        this ->data = data;
       this -> next = NULL;
    }
};

void takeInputInHead(node* &head ,int data)
{
    node* temp = new node(data);
    temp ->next = head;
    head = temp;

}
void takingInputInTail(node* &tail,int data)
{
    // creating new node
    node *temp = new node(data);
    tail -> next = temp;
    tail = tail ->next;
}
void print(node*& head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
int main()
{
    node* node1 = new node(20);
    node * head = node1;
    node* tail = node1;
    print(head);
    takeInputInHead(head,22);
    print(head);

    return 0;
}