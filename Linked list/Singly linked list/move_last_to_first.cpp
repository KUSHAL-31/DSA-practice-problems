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

void printFromStart(node*head){
    if(head->next==NULL){
        cout<<head->data<<endl;
        return;
    }
    cout<<head->data<<" - ";
    printFromStart(head->next);
}

void movedList(node*&head){
    node*temp=head;
    node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp->next=head;
    head=temp;
}

int main()
{
    node *head;
    head = NULL;
    insertAtStart(head, 2);
    insertAtStart(head, 5);
    insertAtStart(head, 4);
    insertAtStart(head, 3);
    printFromStart(head);
    movedList(head);
    printFromStart(head);
    return 0;
}