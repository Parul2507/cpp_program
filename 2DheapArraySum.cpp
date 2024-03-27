#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main(){
    int rows, cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;

    int **matrix1 = new int*[rows];
    int **matrix2 = new int*[rows];
    int **result = new int*[rows];

    for(int i=0; i<rows; i++){
        matrix1[i] = new int[cols];
        matrix2[i] = new int[cols];
        result[i] = new int[cols];
    }

    cout<<"Enter the element of first array: "<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the element of second array: "<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

   for(int i=0; i<rows; i++){
        delete [] matrix1[i]; 
        delete [] matrix2[i]; 
        delete [] result[i]; 
    }

    delete[] matrix1;
    matrix1 = NULL;
    delete[] matrix2;
    matrix2 = NULL; 
    delete[] result;
    result = NULL;
}