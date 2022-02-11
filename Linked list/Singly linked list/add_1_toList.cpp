#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtStart(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

void print(node *head)
{
    if (head->next == NULL)
    {
        cout << head->data << endl;
        return;
    }
    cout << head->data << " - ";
    print(head->next);
}

int addOne(node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    int sum = head->data + addOne(head->next);
    head->data = sum % 10;
    return sum/10;
}

node *newList(node *head)
{
    int carry = addOne(head);
    if(carry){
        node*temp = new node(carry);
        temp->next = head;
        head = temp;
    }
    return head;
}

int main()
{
    node *head;
    head = NULL;
    insertAtStart(head, 9);
    insertAtStart(head, 9);
    insertAtStart(head, 9);
    insertAtStart(head, 1);
    print(head);
    head = newList(head);
    print(head);
    return 0;
}