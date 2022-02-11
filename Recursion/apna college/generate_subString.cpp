#include<bits/stdc++.h>
using namespace std;

void generateSub(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string temp = s.substr(1);
    generateSub(temp,ans);
    generateSub(temp,ans+ch);
}

int main(){
    generateSub("ABC","");
    return 0;
}