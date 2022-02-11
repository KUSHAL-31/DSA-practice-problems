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

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL ";
    cout << endl;
}

void reverseList(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty LIST.." << endl;
        return;
    }
    if (head->next == NULL)
    {
        return;
    }
    node *prev = NULL;
    node *curr = head;
    node *temp;
    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next==NULL)
    {
        return head;
    }
    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

int main()
{
    node *head;
    head = NULL;
    insertAtStart(head, 5);
    insertAtStart(head, 4);
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    insertAtStart(head, 1);
    printList(head);
    reverseList(head);
    // printList(head);
    // head = reverseRecursive(head);
    printList(head);
    return 0;
}