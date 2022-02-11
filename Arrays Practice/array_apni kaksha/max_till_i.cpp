#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}