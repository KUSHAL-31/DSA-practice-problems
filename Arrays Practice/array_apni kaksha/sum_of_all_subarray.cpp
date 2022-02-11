#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=a[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}