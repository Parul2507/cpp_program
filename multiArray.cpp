#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int main()
{
    cout << "Enter a multidimentional array of 2 rows and 3 columns.." << endl;
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }


    int arr[2][3] = {{1, 2, 3}, {7, 8, 9}};
    cout << "multi dimentional array" << endl;
    for (int row = 0; row < 2; row++)
    {

        for (int column = 0; column < 3; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    
}