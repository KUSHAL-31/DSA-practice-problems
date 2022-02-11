#include<bits/stdc++.h>
using namespace std;

void reverse(int*a,int n){
    if(n==0){
        return;
    }
    reverse(a+1,n-1);
    cout<<a[0]<<" ";
}

int main(){
    int a[]={1,2,3,4};
    reverse(a,4);
    return 0;
}