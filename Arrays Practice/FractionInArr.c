#include <stdio.h>
void plusMinusFrac(int *a, int n)
{
    float plus = 0, minus = 0, zero = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            plus += 1;
        }
        else if (a[i] < 0)
        {
            minus += 1;
        }
        else
        {
            zero += 1;
        }
    }
    printf("%f %f %f\n",plus,minus,zero);
    float fracplus,fracMinus,fracZero;
    fracplus= plus/n;
    fracMinus=minus/n;
    fracZero=zero/n;
    printf("%f\t%f\t%f",fracplus,fracMinus,fracZero);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    plusMinusFrac(arr, n);
    return 0;
}