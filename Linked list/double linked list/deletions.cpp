#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

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

void deleteAtStart(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *todelete = head;
    if (head->next == NULL)
    {
        delete todelete;
        head = NULL;
        return;
    }
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deleteAny(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtStart(head);
        return;
    }
    int count = 1;
    node *temp = head;
    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    insertAtTail(head, 6);
    insertAtTail(head, 5);
    display(head);
    // deleteAtStart(head);
    deleteAny(head, 5);
    display(head);
    return 0;
}