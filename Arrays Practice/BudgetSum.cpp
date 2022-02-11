#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        lli N, B, i, temp, sum = 0;
        cin >> N >> B;
        for (i = 0; i < N; i++)
        {
            cin >> temp;
            sum += temp;
        }
        if (sum > B)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}