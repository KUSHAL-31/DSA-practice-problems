#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    // If there is single element, return it.
    // Else return minimum of first element and
    // minimum of remaining array.
    return (n == 1) ? arr[0] : min(arr[0], getMin(arr + 1, n - 1));
}

int getMax(int arr[], int n)
{
    // If there is single element, return it.
    // Else return maximum of first element and
    // maximum of remaining array.
    return (n == 1) ? arr[0] : max(arr[0], getMax(arr + 1, n - 1));
}

int main()
{
    int arr[] = {2,3,1,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n) << "\n";
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}