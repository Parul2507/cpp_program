#include<iostream>

using namespace std;

int main()
{
    int x; cin>>x;
    int total = x / 5;
    if(x % 5 !=0)
    {
        total +=1;
    }

    cout<<total<<endl;
}