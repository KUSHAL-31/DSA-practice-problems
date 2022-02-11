#include<bits/stdc++.h>
#define li long long int
using namespace std;
int main(){
    li n;
    cin>>n;
    li a[n];
    for(li i=0;i<n;i++){
        cin>>a[i];
    }
    li temp = a[0];
    li size=0,count=1;
    for(li i=0;i<n;i++){
        if(a[i]==temp){
            a[i] = a[i]-temp;
        }
        else{
            temp = a[i];
            a[i]=a[i]-temp;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}