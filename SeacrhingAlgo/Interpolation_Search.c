#include <stdio.h>

int Interpolation_Search(int a[], int n, int data)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) * ((data - a[left]) / (a[right] - a[left]));
        
        if (a[mid] == data)
        {
            return mid;
            break;
        }
        else if (a[mid] < data)
        {
            right = mid - 1;
        }
        else
        {
            left = left + 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("\nEnter the length of the array :\n");
    scanf("%d", &n);
    int a[n], i;
    printf("\nEnter the %d elements :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int data;
    printf("\nEnter the element you want to search : ");
    scanf("%d", &data);
    int result;
    result = Interpolation_Search(a, n, data);

    if (result = 0)
    {
        printf("\nElement not found...\n");
    }
    else
    {
        printf("Element found at index %d",result);
    }
    return 0;
}
