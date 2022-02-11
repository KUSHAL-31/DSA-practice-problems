#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int a[],int n,int key,int i){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return firstOccurance(a,n,key,i+1);
}

int lastOccurance(int a[],int n,int key,int i){
    if(i==n){
        return -1;
    }
    int roa = lastOccurance(a,n,key,i+1);
    if(roa!=-1){
        return roa;
    }
    if(a[i]==key){
        return i;
    }
    return -1;
}

void allOccurance(int a[],int n,int key,int i,stack<int>st){
    if(i==n){
        while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
        }
        return;
    }
    if(a[i]==key){
        st.push(i);
    }
    allOccurance(a,n,key,i+1,st);
}

int main(){
    int a[]={4,2,2,3,2};
    // cout<<firstOccurance(a,7,2,0)<<endl;
    // cout<<lastOccurance(a,3,2,0)<<endl;
    stack<int>st;
    allOccurance(a,5,2,0,st);
    return 0;
}