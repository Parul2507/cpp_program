#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main(){
   int a;
   cout<<"Enter the size of the arry: ";
   cin>> a;

   int *ptr = new int[a];

   for(int i=0; i<a; i++){
    cout<<"Array["<< i <<"] ";
    cin>>ptr[i];
   }
   for(int i=0; i<a; i++){
    cout<< ptr[i] <<" ";
   }
   delete[] ptr;
   ptr = NULL;
}