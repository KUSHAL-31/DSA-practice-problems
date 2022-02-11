#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *head;

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
    }

    node *reverseknodes1(node *&head, int k)
    {
        if (head == NULL)
        {
            return 0;
        }
        int count = 0;
        node *prev = NULL;
        node *curr = head;
        node *ahead;
        while (curr != NULL && count < k)
        {
            ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
            count++;
        }

        if (ahead != NULL)
        {
            head->next = reverseknodes1(ahead, k);
        }

        return prev;
    }

    void reverseknodes2(node*&head,int k){
        int count=0;
        node *prev = NULL;
        node *curr = head;
        node *ahead;
        while(curr!=NULL && count<k){
            ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
            count++;            
        }
        
    }
};

int main()
{
    node n1;
    n1.head = NULL;
    // n1.insert(n1.head,1);
    // n1.insert(n1.head,2);
    // n1.insert(n1.head,3);
    // n1.insert(n1.head,4);
    // n1.insert(n1.head,5);
    // n1.insert(n1.head,6);
    n1.display(n1.head);
    cout << endl;
    node *newhead = n1.reverseknodes1(n1.head, 2);
    n1.display(newhead);
    return 0;
}