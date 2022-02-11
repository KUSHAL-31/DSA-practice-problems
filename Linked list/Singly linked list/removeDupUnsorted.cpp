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

node*removeDuplicates(node*head){
    unordered_set<int>s;
    node*curr = head;
    node*prev = NULL;
    node*todelete;
    while (curr!=NULL)
    {
        if(s.find(curr->data)==s.end()){
            s.insert(curr->data);
            prev=curr;
            curr=curr->next;
        }
        else{
            todelete=curr;
            prev->next=curr->next;
            curr=prev->next;
            delete todelete;
        }
    }
    return head;
}

int main()
{
    node *head;
    head = NULL;
    insertAtStart(head, 2);
    insertAtStart(head, 5);
    insertAtStart(head, 4);
    insertAtStart(head, 3);
    insertAtStart(head, 5);
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    insertAtStart(head, 2);
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    printFromStart(head);
    head = removeDuplicates(head);
    printFromStart(head);
    return 0;
}