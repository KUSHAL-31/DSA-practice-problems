#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a1[x][y],a2[y][z],a[x][z];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
            cin>>a1[i][j];
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++)
            cin>>a2[i][j];
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++){
            for(int k=i;k<j;k++){
                a[i][j]=a[i][k]+a[k][j];
            }
        }
    }
    
    for(int i=0;i<x;i++){
        for(int j=0;j<z;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}