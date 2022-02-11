#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *head;
};

void insert(node *&head, int val)
{
    node *n = new node();
    n->data = val;
    n->next = NULL;
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
}

void display(node *head)
{
    if (head == NULL)
    {
        cout << "List empty";
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " - ";
        temp = temp->next;
    }
    cout<<endl;
}

bool detectCycle(node *&head)
{
    node *slowptr = head;
    node *fastptr = head;
    while (fastptr!=NULL && fastptr->next!=NULL)
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr){
            return true;
        }
    }
    return false;
}

void createCycle(node*&head){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next->next;
}

void removeCycle(node*head){
    node*slowptr=head;
    node*fastptr=head;
    while (fastptr!=NULL && fastptr->next!=NULL)
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr){
            break;
        }
    }
    fastptr=head;
    while(fastptr->next==slowptr->next){
        fastptr=fastptr->next;
        slowptr=slowptr->next;
    }
    slowptr->next=NULL;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    // display(head);
    // cout<<detectCycle(head)<<endl;
    createCycle(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    return 0;
}