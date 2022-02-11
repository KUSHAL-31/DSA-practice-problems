#include <bits/stdc++.h>
using namespace std;

class stack2
{
public:
    stack<int> st;

    void enqueue(int x)
    {
        st.push(x);
    }

    int dequeue()
    {
        if (st.empty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        int temp = st.top();
        st.pop();
        if(st.empty()){
            return temp;
        }
        int x = dequeue();
        st.push(temp);
        return x;
    }
};

int main()
{
    stack2 s;
    s.enqueue(5);
    s.enqueue(6);
    s.enqueue(7);
    s.enqueue(8);
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;
    return 0;
}