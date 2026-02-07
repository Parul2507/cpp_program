#include <iostream>
using namespace std;
void pattern12(int n)
{
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for(int j = 1; j <= space; j++)
        {
            cout << " ";

        }
        for(int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    int num = n;
    for(int i = 0; i < n; i++)
    {
        for(char j = 'A'; j < 'A' + num; j++) //you can also use 'A' + (n-i-1)
        {
            cout << j << " ";
        }
        num -= 1;
        cout << endl;
    }
}
void pattern16(int n)
{
    for(char i = 'A'; i <= 'A' + n; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern17(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for(int j = 0; j < 2*i+1; j++)
        {
            cout << ch;
            if(j < breakpoint) ch++;
            else ch--;
        }

        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    pattern17(5);
}
