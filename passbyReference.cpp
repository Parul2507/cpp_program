#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;
void passbyValue(int x){
    x=99;
}
void passbyReference(int *x){
     *x = 66;
}
int main(){
    int paru = 13;
    int palak = 13;

    passbyValue(paru);
    cout<<"Paru is now "<< paru <<endl;

    passbyReference(&palak);
    cout<<"Palak is now "<< palak <<endl;
    
}