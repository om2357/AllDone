#include <iostream>
using namespace std;
#include <queue>
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

node *buildTree(node *root)
{
    int data;
    cout << "enter the data -> " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the data for inserting in left -> " << endl;
    root->left = buildTree(root->left);
    cout << "enter the data for inserting in right nood -> " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOftravarsal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp = NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->right)
            {
                q.push(temp->right);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
        }
    }
}
int main()
{
    node *root = NULL;
    root = buildTree(root);
    cout << "printing the data of node -> " << endl;
    levelOftravarsal(root);

    return 0;
}