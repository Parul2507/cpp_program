#include<iostream>

using namespace std;

class Person{
    public:
    string name;
    int age; 
    char gender;
    protected: 
    float salary;

    public:
    Person(){
    }
    Person(string name, int age, char gender){
        this->name = name;
        // this->age = new int;
        this->age= age;
        this->gender = gender;
    }

    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
   

    void setsalary(float sal){
        salary = sal;
    }
    float getsalary(){
        return salary;
    }

};

class Teacher : public Person {
    public:
    string subject;
    Teacher(string name, int age, char gender, string subject) : Person(name, age, gender){
    }

};
int main(){
    Person p1("Parul", 16,'f');
    Teacher t1("Anurag kumar singh", 33, 'f', "Computer science");
    t1.print();
}