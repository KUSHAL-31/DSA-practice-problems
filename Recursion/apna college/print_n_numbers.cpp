#include<bits/stdc++.h>
using namespace std;

void inc(int n){
    if(n==0){
        return;
    }
    cout<<n<<" - ";
    inc(n-1);
}

void dec(int n){
    if(n==0){
        return;
    }
    dec(n-1);
    cout<<n<<" - ";
}

int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;
}