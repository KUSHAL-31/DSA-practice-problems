#include <bits/stdc++.h>
using namespace std;

class queue1
{
public:
    queue<int> q1;
    queue<int> q2;

    void enqueue(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    int dequeue()
    {
        if (q1.empty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        int ans = q1.front();
        q1.pop();
        return ans;
    }
};

int main()
{
    queue1 q;
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}