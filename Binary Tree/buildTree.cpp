#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}

struct Node *createTree()
{

    int x;
    cout << "Enter the data(-1 for no node): ";
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    struct Node *newnode = new Node(x);
    newnode->left = createTree();
    newnode->right = createTree();
}

int main()
{
    struct Node *root;
    root = createTree();
    inOrder(root);
    return 0;
}