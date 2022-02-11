#include <bits/stdc++.h>
using namespace std;
int prefix(string q)
{
    stack<int>st;
    for (int i = q.length() - 1; i >= 0; i--)
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
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
                break;
            case '^':
                st.push(pow(a,b));
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string q = "-+7*45+20";
    cout<<prefix(q)<<endl;
    return 0;
}