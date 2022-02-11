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

void removeDuplicates(struct node* head)
{
    node*temp = head;
    node*todelete;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            todelete=temp->next;
            temp->next=temp->next->next;
            delete todelete;
        }
        else{
            temp=temp->next;
        }
    }
}

int main()
{
    node *head;
    head = NULL;
    insertAtStart(head, 5);
    insertAtStart(head, 5);
    insertAtStart(head, 4);
    insertAtStart(head, 3);
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    insertAtStart(head, 2);
    insertAtStart(head, 2);
    insertAtStart(head, 2);
    insertAtStart(head, 2);
    printFromStart(head);
    removeDuplicates(head);
    printFromStart(head);
    return 0;
}