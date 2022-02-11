#include <stdio.h>
int main()
{
    int n, i;
    printf("\nEnter the length of the array :\n");
    scanf("%d", &n);
    int a[n],temp;
    printf("Enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
         a[n-1-i]=temp;      
    }
    printf("\nThe elements in the reverse order are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
