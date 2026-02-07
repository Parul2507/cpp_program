#include<iostream>
using namespace std;
void pattern18(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    int space = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }

        for(int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    space = 8;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for(int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;   
    }
}
void pattern20(int n)
{
    int space = 2*n - 2;
    for(int i = 1; i < 2*n-1; i++)
    {
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for(int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n) space -= 2;
        else space += 2;
    }

}
void pattern21(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern22(int n)
{
    for(int i = 0; i < 2*n - 1; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top, down) , min(right, left)) );
        }
        cout << endl;
    }
}
int main()
{
    pattern22(5);
}