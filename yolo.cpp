#include<iostream>
#include<math.h>
#include<assert.h>
#include<memory>

using namespace std;
class person{
  private:
  string name;
  int age;
  char gender;
  public:
  person(string eName, int eAge, char eGender){
    name = eName;
    age = eAge;
    gender = eGender;
  }
  void setName(string eName){
    name = eName;
  }
  void setAge(int eAge){
    age = eAge;
  }
  void setGender(char eGender){
    gender = eGender;
  }

  string getName(){
    return name;
  }
  int getAge(){
    return age;
  }

  char getGender(){
    return gender;
  }
  void information(){
    char temp;
    if(gender == 'F'){
      temp = 'M';
    }else{
      temp ='F';
    }
    cout<<"My name is "<< name << " here i am "<< age << " years old"<<" and i like "<< temp <<endl;
  }
};
class engineer : public person{
  private:
  string eng_type;
  public:
  engineer(string eName, int eAge, char eGender) : person(eName, eAge, eGender);
  engineer(string eEng_type){
    eng_type = eEng_type;
  }
};
 int main(){
  person person1("parul", 20, 'M');
  cout<<person1.getName()<<endl;
  cout<<person1.getGender()<<endl;
  cout<<person1.getAge()<<endl;
  person1.information();
  person1.information();
  person1.information();
  return 0;
}