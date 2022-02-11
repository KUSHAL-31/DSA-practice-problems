#include <stdio.h>
#include<stdlib.h>
void sumOfDiagonal(int n, int a[n][n])
{
    int sumOfRight = 0, sumOfLeft = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sumOfRight += a[i][j];
                //sumOfLeft += a[i][j];
            }
            if (i == (n - 1 - j))
            {
                sumOfLeft += a[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    int diff = abs(sumOfRight-sumOfLeft);
    printf("%d",diff);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sumOfDiagonal(n,a);
    return 0;
}
