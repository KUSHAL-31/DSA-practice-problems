#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int t1[n1];
    int t2[n2];
    for (int i = 0; i < n1; i++)
    {
        t1[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        t2[i] = a[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (t1[i] <= t2[j])
        {
            a[k] = t1[i];
            i++;
        }
        else
        {
            a[k] = t2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = t1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        a[k] = t2[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main()
{
    int a[] = {7,10,4,3,20,15};
    cout << "Unsorted Array :\n";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    mergeSort(a, 0, 5);
    cout << "Sorted Array :\n";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}