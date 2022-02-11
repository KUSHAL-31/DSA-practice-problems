#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
signed main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    assert(1 <= n && n <= 5e5);
	    int i;
	    int arr[n];
	    int sum = 0;
	    for(i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        sum+=arr[i];
	    }
	    // (sum/(n+add)) <= k, k <= sum/(n+add) < k+1, floor(sum/(k+1)) < n+add, add > floor(sum/(k+1)) - n 
	    int add = 1 + sum/(k+1) - n;
	    add = max(add, 0LL);
	    cout << add << '\n';
	}
	return 0;
}