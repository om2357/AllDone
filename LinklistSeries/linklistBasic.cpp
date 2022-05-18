/*
   -> linklist is linera data struture
   -> linklist is dynamic data structure
   -> No memory wasteg
   -> size of linklist esily grow or srink in run time
   -> Insertion and delition is easy in linklist
*/

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_data(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insert_at_position(node* &head ,int position, int data)
{
    if(position == 1)
    {
        insert_data(head, data);
    }

    node * temp = head;
    int count = 1;
    while(count < position -1)
    {
        temp = temp ->next;
        count++ ;
    }
    node* insert_data = new node(data);
    insert_data -> next = temp ->next;
    temp -> next = insert_data;
}

void insert_at_tail(node* &tail, int data)
{
    node* temp = new node(data);
    tail ->next = temp;
    tail = tail ->next;
}

void print(node *head)
{
    node *temp = head;

    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insert_at_tail(tail, 30);
    insert_at_tail(tail,33);
    insert_at_position(head,3 ,11);
    print(head);

    return 0;
}