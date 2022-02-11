#include<iostream>
using namespace std;
void selectionSort(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if (a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }          
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    selectionSort(a,n);
    return 0;
}