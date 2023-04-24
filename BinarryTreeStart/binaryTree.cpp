#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
//  funtion for bulding the tree

node *buildTree(node *root)
{
    cout << "Enter the data -> " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left --> " <<data<< endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right --> " <<data<< endl;
    root->right = buildTree(root->right);
    return root;
}
// leval order traversal (using the help of queue)

void levelOrderTraversal(node *root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp ->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root ->left);
    cout<<root ->data <<" ";
    inorder(root ->right);
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

void postOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data<<" ";
}

int main()
{

    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    levelOrderTraversal(root);

    cout<<"inorder Traversal --> ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal -->";
    preorder(root);
    cout<<endl;
    cout<<"PostOrder Traversal --> ";
    postOrder(root);
    cout<<endl;
    return 0;
}