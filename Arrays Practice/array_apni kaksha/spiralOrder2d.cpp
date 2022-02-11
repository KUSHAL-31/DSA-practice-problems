#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int row_start=0,column_start=0;
    int row_end = n-1;
    int column_end = m-1;
    
    do{
        for(int i=column_start;i<=column_end;i++){
            cout<<a[row_start][i]<<" ";
        }
        row_start++;

        for(int i=row_start;i<=row_end;i++){
            cout<<a[i][column_end]<<" ";
        }
        column_end--;
        
        if(row_start<=row_end){
        for(int i=column_end;i>=column_start;i--){
            cout<<a[row_end][i]<<" ";
        }
        }
        row_end--;

        if(column_start<=column_end){
        for(int i=row_end;i>=row_start;i--){
            cout<<a[i][column_start]<<" ";
        }
        }
        column_start++;
    }while (row_start<=row_end && column_start<=column_end);
    return 0;
}
