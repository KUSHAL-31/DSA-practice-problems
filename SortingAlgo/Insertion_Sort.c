#include <stdio.h>

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

void insertion_sort(int a[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int temp;
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

void print_array(int a[], int n)
{
    int i;
    printf("\nThe sorted array is : \n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void algo_type()
{
    printf("\n\n                          ________________________________________\n\n");
    printf("                          INSERTION SORT ALGORITHM IMPLEMENTATION ....\n");
    printf("                          ________________________________________\n\n");
}

int main()
{
    algo_type();
    int n, data;
    printf("\nEnter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    a[n] = takeInput(n, a);
    insertion_sort(a,n);
    print_array(a, n);
    return 0;
}
