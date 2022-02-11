#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z')
            a=1;
        else if(s[i]>='A' && s[i]<='Z'){
            b=1;
        }
        else if(s[i]>='0' && s[i]<='9')
            c=1;
        else
            d=1;
    }
    int total = 4-(a+b+c+d);
    if(n+total>=6){
        cout<<total<<endl;
    }
    else{
        cout<<n<<endl;
    }

    return 0;
}
