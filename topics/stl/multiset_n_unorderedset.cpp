#include <bits/stdc++.h>
using namespace std;
int main()
{
    // multi set are sorted but not unique
    multiset <int> ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);  // {2, 2, 2}
    ms.insert(1);
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    // ms.erase(2); // this will erase all occurence
    // for(auto x : ms)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    ms.erase(ms.find(2)); // this will delete only the first occurence 
    for(auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl; 

    // rest all function are same as set

    unordered_set<int> us; // element are not sorted but is unique
    us.insert(10);         // does not support upperbound and lowerbound function`
    us.insert(10);
    us.insert(2);
    us.insert(1);
    us.insert(19);

    for (auto x : us)
    {
        cout << x << " ";
    }
    cout << endl;
}