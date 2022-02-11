#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool check = isSorted(arr+1,n-1);
    return (arr[0]<arr[1] && check);
}

int main(){
    int a[]={1,4,3,4,5};
    cout<<isSorted(a,5)<<endl;
    return 0;
}