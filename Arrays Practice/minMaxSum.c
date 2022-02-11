#include<stdio.h>
void minMaxSum(int*a){
    int min=a[0],max=a[0];
    int sum = a[0]+a[1]+a[2]+a[3]+a[4];
    for (int i = 0; i < 5; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }  
        if (a[i]>max)
        {
            max=a[i];
        }
        
    } 
    int maxSum= sum-min;
    int minSum = sum-max; 
    printf("%d %d",minSum,maxSum);
}
int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    minMaxSum(a);
    return 0;
}