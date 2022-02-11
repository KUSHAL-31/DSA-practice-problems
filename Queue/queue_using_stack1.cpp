#include <bits/stdc++.h>
using namespace std;

class stack1
{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty..cannot pop" << endl;
            return;
        }
        if (s2.empty())
        {
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }
        cout<<s2.top()<<endl;
        s2.pop();
    }

    void printQ(){
        if(s1.empty()){
            return;
        }
        int top = s1.top();
        s1.pop();
        printQ();
        cout<<top<<" - ";
    }
};

int main()
{
    stack1 s;
    s.push(10);
    s.push(20);
    s.push(50);
    // s.printQ();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // s.printQ();

    return 0;
}