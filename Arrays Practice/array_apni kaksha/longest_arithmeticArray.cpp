#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prevDiff = a[1] - a[0];
    int curDiff = 2;
    int ans = 2;
    for (int i = 0; i < n; i++)
    {
        for(int j =2;j<n;j++){
            if (a[j]-a[j-1]==prevDiff)
            {
                curDiff++;
            }
            else{
                prevDiff = a[j]-a[j-1];
                curDiff=2;
            }
            ans = max(ans,curDiff);
        }

    }
    cout<<ans;
    return 0;
}