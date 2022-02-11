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

int bubble_sort(int a[], int data, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
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
    printf("\n                          ______________________________________\n\n");
    printf("                          BUBBLE SORT ALGORITHM IMPLEMENTATION ....\n");
    printf("                          ______________________________________\n\n");
}

int main()
{
    algo_type();
    int n, data;
    printf("\nEnter the length of the array : ");
    scanf("%d", &n);
    int a[n];
    a[n] = takeInput(n, a);
    bubble_sort(a, data, n);
    print_array(a, n);
    return 0;
}
