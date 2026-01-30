#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main(){
    int **array = new int*[3];
    for(int i=0; i<3; i++){
        array[i] = new int[3];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        delete[] array[i];
    }

    delete[] array;
    array = NULL;
}