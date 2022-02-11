#include<bits/stdc++.h>
using namespace std;
#define n 10

class queue1{
    int a[n];
    int front=-1;
    int rear=-1;

    public:
    void enqueue(int x){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            a[rear]=x;
            return;
        }
        if(rear==(n-1)){
            cout<<"Queue is full"<<endl;
            return;
        }
        rear++;
        a[rear]=x;
    }
    void dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
        
        if(front>rear){
            front=-1;
            rear=-1;
            return;
        }
    }

    void print(){
        if(front==-1){
           cout<<"Queue is empty"<<endl;
           return; 
        }
        for(int i=front;i<=rear;i++){
            cout<<a[i]<<" - ";
        }
        cout<<endl;
    }
};

int main(){
    queue1 q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.print();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.print();
    q.dequeue();
    q.dequeue();
    q.print();

    return 0;
}