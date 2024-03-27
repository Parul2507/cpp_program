#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

void printArr(int* arrys, int a, int b){
    for(int row = 0; row<a; row++){
        for(int column = 0; column<b; column++){
            int* ptr = arrys + (row*b+column);
            cout<<*ptr<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a, b;
    cout<<"How many rows do you want: "<<endl;
    cin>>a;
    cout<<"How many column do you want: "<<endl;
    cin>>b;

    cout<<"Enter the element of the array:"<<endl;

    int array[a][b];
    int arrayTwo[a][b];

    for(int row=0; row<a; row++){
        for(int column=0; column<b; column++){
            cin>>array[row][column];
        }
    }


    for(int row=0; row<a; row++){
        for(int column=0; column<b; column++){
            cin>>arrayTwo[row][column];
        }
    }

    cout<<"The first multi dimentinal array is: "<<endl;
    printArr((int*)array, a, b);

    cout<<"The second multi dimentinal array is: "<<endl;
    printArr((int*)arrayTwo, a, b);

    int arrayThree[a][b];

    cout<<"The third multi dimentional array is: "<<endl;

    for(int row=0; row<a; row++){
        for(int column=0; column<b; column++){
            arrayThree[row][column] = array[row][column] + arrayTwo[row][column];
        }
    }

    printArr((int*)arrayThree, a, b );

}