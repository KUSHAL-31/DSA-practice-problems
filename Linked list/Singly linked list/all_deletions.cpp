#include <iostream>
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

void deleteAtStart(node*&head){
    node*temp = head;
    if(head->next==NULL){
        head=NULL;
        delete temp;
        return;
    }
    head=head->next;
    delete temp;
}

void deleteAtEnd(node*&head){
    node*temp=head;
    if(head->next==NULL){
        head=NULL;
        delete temp;
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    node*help = temp->next;
    temp->next=NULL;
    delete help;
}

void deleteAnElement(node*&head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtStart(head);
        return;
    }
    node*temp=head;
    if(temp->data==val){
        head=head->next;
        delete temp;
        return;
    }
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node*help=temp->next;
    temp->next=temp->next->next;
    delete help;  
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
}

int main()
{
    node *head;
    head = NULL;
    insert(head, 6);
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);
    // deleteAtStart(head);
    // deleteAtEnd(head);
    deleteAnElement(head,2);
    printList(head);
    return 0;
}