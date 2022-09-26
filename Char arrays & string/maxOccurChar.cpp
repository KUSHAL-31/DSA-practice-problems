#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    int idx;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            idx = str[i] - 'a';
        }
        else
        {
            idx = str[i] - 'A';
        }
        arr[idx]++;
    }
    int maxi = -1;
    int ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    // char ans = getMaxOccuringChar("hElL");
    cout << getMaxOccuringChar("hell") << endl;
    return 0;
}