#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    cout<<"\nReverse of your entered string is : "<<endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl<<endl;
}
int main()
{
    string s;
    cout<<"\nEnter the string to reverse :"<<endl;
    getline(cin,s);

    reverse(s);
    return 0;
}