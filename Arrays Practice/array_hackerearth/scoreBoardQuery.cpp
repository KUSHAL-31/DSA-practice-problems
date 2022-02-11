#include <bits/stdc++.h>
#define li long long int
using namespace std;

void swap(li *a,li l,li r){
    a[l-1]=r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    li n, q;
    li l, r, rank = 1, temp;
    while (t--)
    {
        cin >> n >> q;
        li a[n];
        for (li i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (q--)
        {
            cin >> l >> r;
            swap(a,l,r);
        }
        temp = a[0];
        for (li i = 1; i < n; i++)
        {
            if (a[i] != temp)
            {
                rank++;
                temp = a[i];
            }
        }
        cout << rank + 1 << endl;
    }
    return 0;
}