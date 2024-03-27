#include <iostream>
#include <math.h>
using namespace std;

int sumOfDigit(size_t num){
    cout<<"Calling function with value "<< num <<endl;
    int sum = 0;
    int remainder;
    while(num != 0){
        remainder = num % 10;
        num = num / 10;
        sum+=remainder;
    }  
    if(sum<10){
        return sum;
    }else{
        return sumOfDigit(sum);
    }
}
int main(){
    size_t n = 99999999999999999999;
    cout<<sumOfDigit(n);
}