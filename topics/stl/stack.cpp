#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(0);
    st.push(1);
    st.emplace(2);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.empty() << endl;
}