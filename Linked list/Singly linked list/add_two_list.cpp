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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
}

void insert(node *&head, int val)
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

node *reverseList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node *addTwoLists(node *first, node *second)
{
    node *t1 = reverseList(first);
    node *t2 = reverseList(second);
    node *head3 = NULL;
    int total, carry = 0;
    while (t1 != NULL && t2 != NULL)
    {
        total = carry + (t1->data) + (t2->data);
        carry = total / 10;
        total = total % 10;
        insert(head3, total);
        t1 = t1->next;
        t2 = t2->next;
    }
    while (t1 != NULL)
    {
        total = carry + (t1->data);
        carry = total / 10;
        total = total % 10;
        insert(head3, total);
        t1 = t1->next;
    }
    while (t2 != NULL)
    {
        total = carry + (t2->data);
        carry = total / 10;
        total = total % 10;
        insert(head3, total);
    }

    if(carry!=0)
    {
        insert(head3, carry);
    }
    // head3 = reverseList(head3);
    return head3;
}

int main()
{
    node *first;
    node *second;
    first = NULL;
    second = NULL;
    insert(first, 6);
    insert(first, 9);
    insert(first, 0);
    insert(first, 5);
    insert(first, 4);
    insert(first, 9);
    print(first);
    cout << endl;
    insert(second, 8);
    insert(second, 5);
    insert(second, 3);
    print(second);
    cout << "\n------------" << endl;
    node *sumList = addTwoLists(first, second);
    print(sumList);
    return 0;
}