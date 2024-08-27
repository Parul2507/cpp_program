#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    public:
    Student(string name, int age){
        this->name = name;
        this->age = age;
    }

    friend void print(Student s1);
};

void print(Student s1){
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
}
int main(){
    Student s1("Anu", 20);
    print(s1);
}