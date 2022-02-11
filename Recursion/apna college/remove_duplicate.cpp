#include<bits/stdc++.h>
using namespace std;

string revoveDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    char first = s[0];
    string temp = revoveDuplicate(s.substr(1));
    if(first==temp[0]){
        return temp;
    }
    return first+temp;
}

int main(){
    string s;
    cout<<"Enter the string :\n";
    cin>>s;
    cout<<revoveDuplicate(s);
    return 0;
}