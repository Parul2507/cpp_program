#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back() += 3; //this will add 3 to top element means 3
    cout << q.back() << endl;
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    while(!q.empty())         // ranged based loop does not work in stack, queue and priority_queue
    {
        cout << q.front() << " ";
        q.pop();
    }
}