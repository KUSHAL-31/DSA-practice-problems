#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
}

Node *midElement(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *t1 = head;
    Node *t2 = head;
    while (t2->next != NULL && t2 != NULL && t2->next->next != NULL)
    {
        t1 = t1->next;
        t2 = t2->next->next;
    }
    return t1;
}

Node *mergeList(Node *t1, Node *t2)
{
    if (t1 == NULL)
    {
        return t2;
    }
    if (t2 == NULL)
    {
        return t1;
    }
    Node *ans = NULL;
    Node *ptr1 = t1;
    Node *ptr2 = t2;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data <= ptr2->data)
        {
            insert(ans, ptr1->data);
            ptr1 = ptr1->next;
        }
        else
        {
            insert(ans, ptr2->data);
            ptr2 = ptr2->next;
        }
    }

    while (ptr1 != NULL)
    {
        insert(ans, ptr1->data);
        ptr1 = ptr1->next;
    }

    while (ptr2 != NULL)
    {
        insert(ans, ptr2->data);
        ptr2 = ptr2->next;
    }
    return ans;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *mid = midElement(head);
    Node *h2 = mid->next;
    mid->next = NULL;
    Node *finalList = mergeList(mergeSort(head), mergeSort(h2));
    return finalList;
}

int main()
{
    Node *head = NULL;
    insert(head, 3);
    insert(head, 5);
    insert(head, 8);
    insert(head, 3);
    insert(head, 4);
    insert(head, 12);
    insert(head, 54);
    insert(head, 7);
    insert(head, 1);
    cout<<endl;
    print(head);
    cout << "\nAfter sorting..."<<endl;
    head = mergeSort(head);
    print(head);
    cout<<endl;
    return 0;
}