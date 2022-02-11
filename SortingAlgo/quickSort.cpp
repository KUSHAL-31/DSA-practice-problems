#include<bits/stdc++.h>
using namespace std;

void swap(int*a,int p,int q){
    int temp = a[p];
    a[p]=a[q];
    a[q]=temp;
}

int partition(int*a,int l,int r){
    int pivot = a[r];
    int pIndex = l;
    for(int i=l;i<r;i++){
        if(a[i]<=pivot){
            swap(a,i,pIndex);
            pIndex++;
        }
    }
    swap(a,pIndex,r);
    return pIndex;
}

void quickSort(int*a,int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main(){
    int arr[]={3,9,6,2,1};
    cout<<"Unsorted Array :\n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    quickSort(arr,0,4);
    cout<<"Sorted Array :\n";
        for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}