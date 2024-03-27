#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter number of rows, columns: ";
    cin>>rows>>cols;

    int **pointer = new int*[rows];

    for(int i=0; i<rows; i++){
        pointer[i] = new int[cols];
    }
    
    cout<<"Enter the element of 2D arrays"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>pointer[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<pointer[i][j] <<" ";
        }
    }
    for(int i=0; i<rows; i++){
        delete[] pointer[i];
    }
    delete[] pointer;
    pointer = NULL;
    
}