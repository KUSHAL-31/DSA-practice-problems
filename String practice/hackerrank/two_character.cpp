#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n>>str;
    char temp = str[0];
    for(int i=0;i<n;i++){
        if(str[i]==temp){
        str.erase(i,1);
        i=-1;
        }
    }
    cout<<str;
    return 0;
}