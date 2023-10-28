//binary tree is --> Non linear data structure

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
node* BuildTree(node* root)
{
    cout<<"Enter the node data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }

    cout<<"enter data for insertin in left of -> "<<data<<endl;
    root -> left = BuildTree(root->left);
    cout<<"Enter the data for inserting in right of -> "<<data <<endl;
    root -> right = BuildTree(root -> right);
    return root;
}
int main()
{
    node* root = NULL;
    root = BuildTree(root);
    return 0;
}