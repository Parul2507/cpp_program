#include <bits/stdc++.h>
using namespace std;
int main()
{
    list <int> ls = {0};
    ls.push_back(1);
    ls.emplace_back(2);
    ls.emplace_front(2);
    for(auto it : ls)
    {
        cout << it << endl;
    }
    //rest of the fuction are same as vector like begin, end, clear, size, empty, insert, ect
}