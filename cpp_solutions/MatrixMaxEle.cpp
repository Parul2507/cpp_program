#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main(){
    int row, col;
    cout<<"Enter no. of rows and column: ";
    cin>> row >>col;
    int **matrix = new int*[row];
    for(int i=0; i<row; i++){
        matrix[i] = new int[col];
    }

    cout<<"Now enter the element of the array: "<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    } 
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int maxEle = matrix[0][0];
    int frow = 0, fcol = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]>maxEle){
                maxEle = matrix[i][j];
                frow = i;
                fcol = j;
            }
        }
    }
    cout<<"Maximum element is: "<< maxEle <<endl;
    cout<<"found at "<<frow<<" row and "<<fcol<<" column"<<endl;
}