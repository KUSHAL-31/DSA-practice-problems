#include <stdio.h>
void candleCount(int *a, int n)
{
    int max = a[0], count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            //count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    candleCount(a, n);
    return 0;
}