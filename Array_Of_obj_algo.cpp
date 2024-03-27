#include<iostream>
#include<math.h>
#include<assert.h>
#include<algorithm>

using namespace std;

class Student{
    private:
    string Name;
    int Age;
    char Gender;
    float Grade;

    public:
    Student(string eName, int eAge, char eGender, float eGrade){
        Name = eName;
        Age = eAge;
        Gender = eGender;
        Grade = eGrade;
    }

    string getName()const{
        return Name;
    }
    int getAge()const{
        return Age;
    }
    char getGender()const{
        return Gender;
    }
    float getGrade()const{
        return Grade;
    }

    void setName(string eName){
        Name = eName;
    }
    void setAge(int eAge){
        Age = eAge;
    }
    void setGender(char eGender){
        Gender = eGender;
    }
    void setGrade(float eGrade){
        Grade = eGrade;
    }
    Student(){}
};

bool compareByGrade(const Student& s1, const Student& s2){
    return s1.getGrade() < s2.getGrade();
}

bool compareByName(const Student& s1, const Student& s2){
    return s1.getName() < s2.getName();
}

int main(){
    Student students[5] = {
        {"Parul", 20, 'f', 8.5},
        {"Anu", 21, 'm', 9.5},
        {"Palak", 19, 'f', 7.5},
        {"Anurag", 25, 'm', 6.5},
        {"Paru", 21, 'f', 7.5}

    };
    
    // for(int i=0; i<5; i++){
    //     if(students[i].getName() == "Palak"){
    //         cout<<"Palak is found in "<< i <<" indx"<<endl;
    //         students[i].setGrade(10.5); 
    //         break;
    //     }
    // }

    // for(int j=0; j<5; j++){
    //     cout<<students[j].getName()<<endl;
    //     cout<<students[j].getAge()<<endl;
    //     cout<<students[j].getGender()<<endl;
    //     cout<<students[j].getGrade()<<endl;
    //     cout<<endl;
    // } 
    
    // sort(students, students+5, compareByGrade);

    // for(int i=0; i<5; i++){
    //     cout<<students[i].getName()<<endl;
    // }

    sort(students, students+5, compareByName);

    // for(int i=0; i<5; i++){
    //     cout<<students[i].getName()<<endl;
    // }

    reverse(students, students + 5);

    // for(int i=0; i<5; i++){
    //     cout<<students[i].getName()<<endl;
    // }

    Student *maxElement = max_element(students, students + 5, compareByGrade);
    cout<<"Max grade student is: "<<maxElement->getName()<<endl;

    Student *minElement = min_element(students, students + 5, compareByGrade);
    cout<<"Min grade student is: "<<minElement->getName()<<endl;

    return 0;
}