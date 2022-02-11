#include<bits/stdc++.h>
using namespace std;
#define n 5

class stack1{
    int top=-1;
    int arr[n];
    public:

    void push(int data){
        if(top==n-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    } 

    void pop(){
        if(top==-1){
            cout<<"No elements to pop"<<endl;
            return;
        }
        cout<<arr[top]<<" removed"<<endl;
        top--;
    }

    int top1(){
        if(top==-1){
            cout<<"Stack empty"<<endl;
            return 0;
        }
        return arr[top];
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    stack1 st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.display();
    cout<<"Element at top : "<<st.top1()<<endl;
    st.pop();
    st.push(10);
    cout<<"Element at top : "<<st.top1()<<endl;
    st.display();

    return 0;
}