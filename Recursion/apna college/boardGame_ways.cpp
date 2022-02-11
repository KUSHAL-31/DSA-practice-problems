#include <bits/stdc++.h>
using namespace std;

int possibleWays(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    if (a > b)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += possibleWays(a + i, b);
    }
    return count;
}

int main()
{
    cout << possibleWays(0, 2) << endl;
    return 0;
}