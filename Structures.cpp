#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

struct SmartPhone{
    string Name;
    int StorageSpace;
    string Color;
    float Price;
};
struct Person{
    string Name;
    int Age;
    SmartPhone smartphone;
};
void print(SmartPhone smartphone){
    cout<<"Name: "<<smartphone.Name<<endl;
    cout<<"Storage space: "<<smartphone.StorageSpace<<endl;
    cout<<"Color: "<<smartphone.Color<<endl;
    cout<<"Price: "<<smartphone.Price<<endl;
}

void printPerson(Person person){
    cout<<"Name: "<<person.Name<<endl;
    cout<<"Age: "<<person.Age<<endl;
    print(person.smartphone);

}
int main(){
    SmartPhone smartphone1;
    smartphone1.Name = "Samsung";
    smartphone1.StorageSpace = 64;
    smartphone1.Color = "Black";
    smartphone1.Price = 400000;

    SmartPhone smartphone2;
    smartphone2.Name = "Iphone";
    smartphone2.StorageSpace = 128;
    smartphone2.Color = "Red";
    smartphone2.Price = 600000;

    // print(smartphone1);
    // print(smartphone2);

    Person p;
    p.Name = "parul";
    p.Age = 20;
    p.smartphone = smartphone2; 

    printPerson(p);
    return 0;
}