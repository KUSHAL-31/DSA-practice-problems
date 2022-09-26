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
    cout << "Enter the data(-1 for no Node): ";
    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    struct Node *newNode = new Node(x);
    newNode->left = createTree();
    newNode->right = createTree();
}

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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

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

void traversalWithSeparator(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
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
            cout << temp->data << " ";
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

void reverseLevelOrderTraversal(Node *root)
{
    stack<Node *> s;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        s.push(temp);
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    while (!s.empty())
    {
        cout << s.top()->data << " ";
        s.pop();
    }
}

void reverseLevelOrderWithSeparator(Node *root)
{
}

int height(Node *Node)
{
    if (Node == NULL)
        return 0;
    else
    {
        /* compute the height of each subtree */
        int lheight = height(Node->left);
        int rheight = height(Node->right);

        /* use the larger one */
        if (lheight > rheight)
        {
            return (lheight + 1);
        }
        else
        {
            return (rheight + 1);
        }
    }
}

void printCurrentLevel(Node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1)
    {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

void levelOrderRecursion(Node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

void revreseLevelRecursion(Node *root)
{
    int h = height(root);
    int i;
    for (i = h; i >= 1; i--)
        printCurrentLevel(root, i);
}

int main()
{
    // struct Node *root;
    // root = createTree();
    // inOrder(root);
    Node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the level order traversal : " << endl;
    traversalWithSeparator(root);
    cout << endl;
    cout << "Printing reverse order traversal : " << endl;
    reverseLevelOrderTraversal(root);
    cout << endl;
    cout << "Printing the level order traversal with recursion : " << endl;
    levelOrderRecursion(root);
    cout << endl;
    cout << "Printing the rerverse level order traversal with recursion : " << endl;
    revreseLevelRecursion(root);
    return 0;
}