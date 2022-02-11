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
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

int listPartition(Node*&head,int l,int r){
    int pIndex=0;
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    int pivot = temp->data;
    temp=head;
    Node*prev=head;
    while(temp->next->next!=NULL){
        if(temp->data<=pivot){
            pIndex++;
        swap(temp->data,pivot);
        prev=prev->next;
        }
        temp=temp->next;
    }
    swap(prev->data,pivot);
    return pIndex;
}

void quickSort(Node*&head,int l,int r){
    if(l<r){
    int pIndex = listPartition(head,l,r);
    Node*second=head;
    int count=0;
    while(count<pIndex){
        second=second->next;
        count++;
    }
    second->next=NULL;
    quickSort(head,l,pIndex-1);
    quickSort(second,pIndex,r);
    }
}

int main()
{
    Node *head = NULL;
    insert(head, 3);
    insert(head, 5);
    insert(head, 8);
    insert(head, 4);
    insert(head, 7);
    insert(head, 1);
    print(head);
    cout << endl;
    quickSort(head,0,5);
    print(head);
    return 0;
}