#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;
//write a func which take a array of number and a value which has to be find. return the indexof the value in the array if it was found, else return -1

int search(int array[], int sizeOfArray, int value){
    for(int i=0; i<sizeOfArray; i++){
        if(array[i] == value){
            return i;
        }
        
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    int value = 20;
    int idx = search(arr, size, value);
    cout << value << " found at index " << idx << endl;
    assert(idx == 1);

    value = 80;
    idx = search(arr, size, value);
    cout << value << " found at index " << idx << endl;
    assert(idx == -1);

}

