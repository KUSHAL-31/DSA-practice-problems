#include <stdio.h>
void linearseacrh(int a[], int data, int n);
int takeInput(int n, int a[]);
int main()
{
    int n, data;
    printf("\nEnter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    a[n] = takeInput(n, a);
    printf("\nEnter the element you want to search : ");
    scanf("%d", &data);
    linearseacrh(a, data, n);
    return 0;
}

int takeInput(int n, int a[])
{
    int i;
    printf("\nEnter the %d elements: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return a[n];
}

void linearseacrh(int a[], int data, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == data)
        {
            printf("\nElement found at index %d and position %d\n",i,(i+1));
            break;
        }
    }
    if (i == n)
    {
        printf("\nElement not found.....\n");
    }
}
