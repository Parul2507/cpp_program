#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

int minNum(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int maxNum(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

void getMinAndMax(int arr[], int size, int *max, int *min)
{
    for (int i = 1; i < size; i++)
    {
        if (*max < arr[i])
            *max = arr[i];
        if (*min > arr[i])
            *min = arr[i];
    }
}
int main()
{
    int arr[5] = {13, 1, 16, 29, 11};
    // cout<<"Minimum value is: "<<minNum(arr, 5)<<endl;
    // cout<<"Maximum value is: "<<maxNum(arr, 5)<<endl;
    int a = arr[0];
    int b = arr[0];
    getMinAndMax(arr, 5, &a, &b);

    cout << "Maximun value is " << a << endl;
    cout << "Minimun value is " << b << endl;
}