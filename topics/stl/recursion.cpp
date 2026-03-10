#include <iostream>
using namespace std;
void function(int i, int n)
{
    if(i > n) return;
    cout << i << endl;
    function(i+1, n);
}
void function1(int i, int n)
{
    if(i < 1) return;
    cout << i << endl;
    function1(i-1, n);
}
void function2(int i, int n)    // This function is doing backtracking
{
    if(i < 1) return;
    function2(i-1, n);
    cout << i << endl;
}
void function3(int i, int n)
{
    if(i > n) return;
    function3(i+1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    // function(1, n);
    // function1(n, n);
    // function2(n, n);
    function3(1, n);
    return 0;
}