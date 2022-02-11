#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    stack<char> st;
    int i = 0;
    for (int i = 0; i < s.length(); i++)
    {
        {
            string word = "";
            if (s[i] == '\\')
            {
                while (st.top() != '/')
                {

                    word += st.top();
                    st.pop();
                }

                st.pop();
                for (int j = 0; j < word.length(); j++)
                {

                    st.push(word[j]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    string ans;
    while (!st.empty())
    {
        if (st.top() == '/')
        {
            st.pop();
            break;
        }
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main()
{
    string s;
    getline(cin, s);
    reverse(s);
    return 0;
}