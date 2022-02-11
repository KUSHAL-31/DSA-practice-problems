#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void rotateArrayLong(int *a, int n, int rotate)
{
    
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5};
    printf("\nOriginal array : \n");
    printArray(a,5);
     printf("\nLeft rotated array : \n");
    rotateArrayLong(a, 5, 4);
    printArray(a, 5);
    printf("\n");
    return 0;
}