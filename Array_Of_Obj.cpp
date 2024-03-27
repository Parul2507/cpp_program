#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;
class Student
{
public:
    string Name;
    int Age;
    char Gender;
    float Grade;

public:
    Student(string eName, int eAge, char eGender, float eGrade)
    {
        Name = eName;
        Age = eAge;
        Gender = eGender;
        Grade = eGrade;
    }
    Student() {}
};
int main()
{
    // Student s1("Parul", 21, 'f', 7);
    // Student students[3];
    // students[0] = s1;

    Student students[3] = {
        {"Parul", 21, 'f', 9.5},
        {"Anu", 21, 'm', 10},
        {"Bill", 60, 'm', 7}};

    //     Student students[3];
    //     for(int i=0; i<3; i++){
    //         cout<<"Student "<< i+1 <<endl;

    //         Student s;
    //         cout<<"Name: ";
    //         cin>>s.Name;
    //         cout<<"Age: ";
    //         cin>>s.Age;
    //         cout<<"Gender: ";
    //         cin>>s.Gender;
    //         cout<<"Grade: ";
    //         cin>>s.Grade;

    //         students[i] = s;
    //    }

    //    cout<<"Grade of first student is "
    //        <<students[0].Grade<<endl;

    //     students[1].Name = "Anurag";

    float sumOfGrande = 0;

    for (int i = 0; i < 3; i++)
    {
        sumOfGrande += students[i].Grade;
    }
    cout << sumOfGrande / 3 << endl;
    return 0;
}