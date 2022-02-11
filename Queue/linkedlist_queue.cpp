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

class que
{
public:
    node *front = NULL;
    node *rear = NULL;

    void enqueue(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        node*temp=front;
        front=front->next;
        delete temp;
    }

    void printQ(){
        node*temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" - ";
            temp=temp->next;
        }
        cout<<endl;
    }

    bool isEmpty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main()
{
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.printQ();
    q.dequeue();
    q.printQ();
    cout<<q.isEmpty()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.isEmpty()<<endl;
    return 0;
}