#include <iostream>
#include <math.h>
using namespace std;

float avgOfMarks(int markAvg[], int arraySize)
{
    float avg;
    float sum = 0;
    for (int i = 0; i < arraySize; i++)
    {
        sum += markAvg[i];
    }
    avg = (sum / arraySize);

    return avg;
}
int main()
{
    int numStu;
    cout << "Enter the number of student: " << endl;
    cin >> numStu;

    int boyMarks[numStu];
    for (int i = 0; i < numStu; i++)
    {
        cout << "Enter boys marks: " << i << endl;
        cin >> boyMarks[i];
    }
    int girlMarks[numStu];
    for (int j = 0; j < numStu; j++)
    {
        cout << "Enter girls marks: " << j << endl;
        cin >> girlMarks[j];
    }
    float avgGirlsMarks = avgOfMarks(girlMarks, numStu);
    float avgBoysMarks = avgOfMarks(boyMarks, numStu);

    if(avgGirlsMarks > avgBoysMarks){
        cout<<"Avrage of girls is higher"<<endl;
    }else{
        cout<<"Avarage of boys is higher"<<endl;
    }
}
