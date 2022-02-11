#include <iostream>
using namespace std;
int* bubbleSort(int *a, int n)
{
    int temp;
    int start = 1;
    while (start < n)
    {
        for (int i = 0; i < n - start; i++)
        {
            if (a[i] > a[i+1])
            {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
        start++;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Array before sort :\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    int* ptr =  bubbleSort(a,n);
    cout<<"\nArray after sort :\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << "  ";
    }
    return 0;
}