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

void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtMiddle(node *&head, int val, int pos)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    int count = 1;
    while (count != pos)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
}

void printList(node *head)
{
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL ";
}

int main()
{
    node *head;
    head = NULL;
    // insertAtStart(head, 4);
    // insertAtStart(head, 3);
    // insertAtStart(head, 2);
    // insertAtStart(head, 1);
    insertAtEnd(head, 8);
    insertAtEnd(head, 9);
    insertAtEnd(head, 10);
    // insertAtMiddle(head, 5, 4);
    // insertAtMiddle(head, 6, 5);
    // insertAtMiddle(head, 7, 6);
    printList(head);
    return 0;
}