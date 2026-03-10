#include <bits/stdc++.h>
using namespace std;
int main()
{
    // every value in sets is unique and sorted 
    set <int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(auto i = s.begin(); i != s.end(); i++)  // can also use for(auto x : s)
    {
        cout << *i << " ";
    }
    cout << endl;

    auto it = s.find(3); // return an iterator of the element if the element is not found then it return s.end() which is next iterator of last element 

    s.erase(3); // erase 3 from the set
    int c = s.count(2); // which always be 1

    // {1, 2, 3, 4 , 5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); // {1, 4, 5}

    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it3 = s.lower_bound(2); // it is also in vector as well 
    auto it3 = s.upper_bound(3);


    // there are more function is set stl which are simillar to vectors like begin, end, swap, ect
}