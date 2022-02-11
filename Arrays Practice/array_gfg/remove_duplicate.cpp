#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int remove_duplicate(int*a,int n){
        for(int i=0;i<n;i++){
            int el = a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]==el){
                    for(int k=j+1;k<n;k++){
                        a[k-1]=a[k];
                        n=n-1;
                    }
                }
            }
        }
        return sizeof(a)/sizeof(a[0]);
    }
};

int main(){

    int a[]={1,2,2,2,3};
    Solution s;
    cout<<s.remove_duplicate(a,3);
    return 0;
}