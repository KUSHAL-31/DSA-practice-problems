#include <iostream>
using namespace std;

void solve(int a[], int n)
{
    int i = 0;
    int temp;
    int end = n - 1;
    while (i <= end)
    {
        if (a[i] > 0)
        {
            temp = a[i];
            a[i] = a[end];
            a[end] = temp;
            end--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    //code
    int a[] = {-3, -5, 2, 4, -7, -2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    solve(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}