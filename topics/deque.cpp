#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(0);
    dq.pop_back();
    for(auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
}