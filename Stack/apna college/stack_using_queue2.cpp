#include <bits/stdc++.h>
using namespace std;

class queue1
{
public:
    queue<int> q1;
    queue<int> q2;

    void enqueue(int x)
    {
        q1.push(x);
    }

    int dequeue()
    {
        if (q1.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return ans;
    }
};

int main()
{
    queue1 q;
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}