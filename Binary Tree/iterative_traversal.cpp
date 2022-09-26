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

Node *buildTree(Node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Left Node of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Right Node of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void inOrder(Node *root)
{
    stack<Node *> st;
    Node *temp = root;
    while (temp != NULL || !st.empty())
    {
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }
        temp = st.top();
        st.pop();
        cout << temp->data << " ";
        temp = temp->right;
    }
}

void preOrder(Node *root)
{
    stack<Node *> st;
    st.push(root);
    while (!st.empty())
    {
        Node *temp = st.top();
        cout << temp->data << " ";
        st.pop();
        if (temp->right)
            st.push(temp->right);
        if (temp->left)
            st.push(temp->left);
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "In order traversal : " << endl;
    inOrder(root);
    cout << endl
         << "Pre order traversal : " << endl;
    preOrder(root);
    // cout << endl
    //      << "Post order traversal : " << endl;
    // postOrder(root);
    return 0;
}