#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int, int> mp; // stores key and value and keys are unique and sorted
    mp[1] = 10;        // means in key 1 store 10;
    mp.emplace(2, 20); // 2 is key 20 is value
    mp.insert({3, 30});

    map <pair<int, int>, int> mp1;
    mp1[{1, 2}] = 100;
    mp1[{3, 4}] = 200;

    map <int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }


    for(auto x : mp1)
    {
        cout << x.first.first << " " << x.first.second << " " << x.second << endl;
    }

    cout << mp[1] << endl;
    // auto itt = mp.find(3);
    // cout << *(itt).second << endl;

    // lowerbound and upperbound function is same as vector


    // multimap can store dublicate keys but they are sorted map[key] can be used in multimap
    // unorderedmap stores unique keys but they are not sorted
}