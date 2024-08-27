#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string Name;
    string JobProfile;
    int Age;
    int Star;

public:
    Person(string name, string jobProfile, int age, int star = 0)
    {
        Name = name;
        JobProfile = jobProfile;
        Age = age;
        Star = star;
    }

    void getinfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Job profile: " << JobProfile << endl;
        cout << "Age: " << Age << endl;
        cout << "Stars: " << Star << endl;
    }
    void gainStar()
    {
        Star++;
    }
    void lossStar()
    {
        Star--;
    }

    void analysis()
    {
        if (Star > 3)
        {
            cout << "This person is good" << endl;
        }
        else
        {
            cout << "This person need to word on themself" << endl;
        }
    }
};

class Student : public Person
{
public:
    Student(string name, string jobProfile, int age, int star) : Person(name, jobProfile, age, star)
    {
    }
};

class Teacher : public Person
{
public:
    Teacher(string name, string jobProfile, int age, int star) : Person(name, jobProfile, age, star)
    {
    }
};

int main()
{
    Person p1("Parul", "Enggineer", 20, 2);
    Student s1("Anu", "Student", 12, 6);
    Teacher  t1("tanu", "Teacher", 30, 1);
    s1.gainStar();
    s1.gainStar();
    s1.lossStar();
    p1.lossStar();
    p1.lossStar();
    t1.lossStar();
    
    s1.analysis();
    t1.analysis();
    Person *ptr1 = &s1;
    Person *ptr2 = &t1;

    ptr1->analysis();
    ptr2->analysis();
 }