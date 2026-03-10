#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair <int, int> p2)
{
    if(p1.second <  p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
}
int main()
{
    pair <int, int> a[] = {{1, 2}, {2,1}, {4,1}};
    sort(a, a+2, comp);

    // comp is a comparator also greater<int> is also comparator 
    // lambda
    // __builtin_popcount() its for int and __buildtin_popcountll() its for long long
    // next_permutation
    // max_element(a, a+n) it gives you address same with min_element
}