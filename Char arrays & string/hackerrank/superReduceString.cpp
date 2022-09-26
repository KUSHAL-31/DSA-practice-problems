#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void superReducedString(string s)
{
    int length = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            i = -1;
        }
    }
    (s.empty()) ? cout << "Empty String" : cout << s;
}

int main()
{
    string s;
    getline(cin, s);
    superReducedString(s);
    return 0;
}