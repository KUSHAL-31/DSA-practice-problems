#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int k){
    if(st.empty()){
        st.push(k);
        return;
    }
    int temp = st.top();
    st.pop();
    insertAtBottom(st,k);
    st.push(temp);
}

void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();

    reverse(st);

    insertAtBottom(st,temp);
}

void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    print(st);
    cout<<endl;
    reverse(st);
    print(st);
    return 0;
}