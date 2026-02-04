#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int a = n;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= n;j++)

        {
            cout << j << " ";
        }
        n--;
        cout << endl;
    }
}