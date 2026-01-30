#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

void findReplace(int arr[], int size, int find, int replace){
    for(int i=0; i<size; i++){
        if(arr[i] == find){
            arr[i] = replace;
        }
    }
}

int main(){
   int arr[5] = { 1, 2, 1, 2, 1 };
    findReplace(arr, 5, 1, 99);

    assert(arr[0] == 99);
    assert(arr[1] == 2);
    assert(arr[2] == 99);
    assert(arr[3] == 2);
    assert(arr[4] == 99);

    return 0;
}