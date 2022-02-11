#include <bits/stdc++.h>
using namespace std;

void toh(int n, char src, char helper, char dest)
{
    if(n==0){
        return;
    }
    toh(n-1,src,dest,helper);
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,src,dest);
}

int main()
{
    toh(3,'A','B','C');
    return 0;
}