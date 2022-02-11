#include<bits/stdc++.h>
using namespace std;

void reverseWord(string s){
    if(s.length()==0){
        return;
    }
    string temp = s.substr(1);
    reverseWord(temp);
    cout<<s[0];
}

int main(){
    string s;
    cout<<"Enter any word : \n";
    cin>>s;
    reverseWord(s);
    return 0;
}