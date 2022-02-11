#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

void insertAtHead(node *&head, int val)
{
    node *n = new node();
    n->data = val;
    n->next = NULL;
    n->prev = NULL;
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head->prev = n;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node();
    n->data = val;
    n->next = NULL;
    n->prev = NULL;
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void insertAtMiddle(node *&head, int pos, int val)
{
    node *n = new node();
    n->data = val;
    n->prev = NULL;
    n->next = NULL;
    int count = 1;
    node *temp = head;
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    n->prev = temp;
    temp->next = n;
    temp->next->prev = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}

void displayReverse(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->prev;
    }
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtMiddle(head, 4, 4);
    insertAtMiddle(head, 5, 5);
    insertAtMiddle(head, 6, 6);
    display(head);
    // displayReverse(head);
    return 0;
}