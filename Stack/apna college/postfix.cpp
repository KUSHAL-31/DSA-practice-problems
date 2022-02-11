#include <bits/stdc++.h>
using namespace std;
int prefix(string q)
{
    stack<int>st;
    for (int i = 0; i <q.length(); i++)
    {
        if (q[i] >= '0' && q[i] <= '9')
        {
            st.push(q[i]-'0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b= st.top();
            st.pop();
            switch (q[i])
            {
            case '+':
                st.push(b+a);
                break;
            case '-':
                st.push(b-a);
                break;
            case '*':
                st.push(b*a);
                break;
            case '/':
                st.push(b/a);
                break;
            case '^':
                st.push(pow(b,a));
            default:
                continue;
            }
        }
    }
    return st.top();
}
int main()
{
    string q = "46+2/5*7+";
    cout<<prefix(q)<<endl;
    return 0;
}