#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    int temp;
    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low++;
            mid++;
        }
        else if (a[mid] == 2)
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
        else{
            mid++;
        }
    }
}

int main()
{
    int a[] = {2, 1, 0, 2, 1, 2, 1, 0, 0, 2, 1, 0, 1, 2};
    sort012(a, 14);
    // int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < 14; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}