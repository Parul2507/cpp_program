#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

void printnumber(int *x){
    cout<< *x <<endl;
}

void printletter(char *y){
    cout<< *y <<endl;
}

void print(void *ptr, char type){
    if(type == 'i'){
        cout << *((int*)ptr) <<endl;
    }else if(type == 'c'){
        cout << *((char*)ptr) <<endl;
    }else if(type == 'f'){
        cout << *((float*)ptr) <<endl;
    }else{
        cout<< *((double*)ptr) <<endl;
    }
}   
int main(){
    int num = 15;
    char letter = 'a';

    print(&num, 'i');
    print(&letter, 'c');
}    