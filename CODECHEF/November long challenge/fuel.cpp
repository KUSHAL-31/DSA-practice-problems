#include <bits/stdc++.h>
using namespace std;

void cheapFuel(int x, int y, int a, int b, int k)
{
    for (int i = 0; i < k; i++)
    {
        x += a;
        y += b;
    }
    if (x > y)
    {
        cout << "DIESEL" << endl;
    }
    else if (x < y)
    {
        cout << "PETROL" << endl;
    }
    else
    {
        cout << "SAME PRICE" << endl;
    }
}

int main()
{
    int t, x, y, a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b >> k;
        cheapFuel(x, y, a, b, k);
    }
    return 0;
}