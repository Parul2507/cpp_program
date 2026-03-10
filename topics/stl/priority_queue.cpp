#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> pq;
    pq.push(2);
    pq.push(8);
    pq.push(3);
    pq.emplace(10);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(2);
    pq2.push(8);
    pq2.push(3);
    pq2.emplace(10);


    cout << pq2.top() << endl;
    pq2.pop();
    cout << pq2.top() << endl;

}