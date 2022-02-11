#include <stdio.h>
void binaryseacrh(int a[], int data, int n);
int takeInput(int n, int a[]);
int main()
{
    int n, data;
    printf("\nEnter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    a[n] = takeInput(n, a);
    printf("\nEnter the element you want to search :\n");
    scanf("%d", &data);
    binaryseacrh(a, data, n);
    return 0;
}

int takeInput(int n, int a[])
{
    int i;
    printf("\nEnter the %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return a[n];
}

void binaryseacrh(int a[], int data, int n)
{
    int l = a[0];
    int r = a[n - 1];
    int i;
    while (l <= r)
    {
        int mid;
        mid = (l + r) / 2;

        if (data == a[mid])
        {
            printf("\nElement found in the array at index %d and position %d\n", mid, (mid + 1));
            break;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (l > r)
    {
        printf("\nElement not found in the array...\n");
    }
}
