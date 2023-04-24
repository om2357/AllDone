#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* right;
    node* left;

    node(int data)
    {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data for node"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }
    cout<<"Enter the data for left Node -> "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"Enter the data for right Node -> "<<data<<endl;
    root -> right = buildTree(root -> right);

    return root;

}
int main()
{
    node* root = NULL;
    root = buildTree(root);
    return 0;
}