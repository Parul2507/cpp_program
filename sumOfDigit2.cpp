#include<iostream>

using namespace std;

int main(){
    int t,sum=0;
    int num, l, r;
    
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        l = num%10;
        r = num/10;
        sum = l+r;
        cout<<sum<<endl;
    }   
}