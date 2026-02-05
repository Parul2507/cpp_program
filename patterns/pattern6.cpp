#include <iostream>
using namespace std;

void pattern6(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < x - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * x - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int x)
{
    for (int i = 0; i < 2 * x - 1; i++)
    {
        int star = i;
        if (i > x)
        {
            star = 2 * x - i;
        }
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int x)
{
    int start = 1;
    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
int main()
{
    int x = 5;
    pattern11(x);
}