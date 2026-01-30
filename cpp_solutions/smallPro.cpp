#include <iostream>
#include <math.h>
#include <assert.h>

using namespace std;

struct Marks
{
    int maths;
    int science;
    int english;
    int hindi;
};

class Student{
private:
    string name;
    int roll_no;
    Marks marks;

    public:
    //default constructor 
    Student(){
        cout<<"default const called"<<endl;
        name = " ";
        roll_no = 0;
        marks.maths=0;
        marks.science=0;
        marks.english=0;
        marks.hindi=0;
    }

    Student(string ename, int eroll_no, Marks emarks){
        cout<<"parame const called"<<endl;
        name = ename;
        roll_no = eroll_no;
        marks = emarks;
    }
    void print(){
        cout<<"Name: "<< name << ","<<" Roll: "<< roll_no <<","<<" Marks: " <<"Math: "<<
            marks.maths<<" Science: "<<marks.science<<" English: "<<marks.english<<" Hindi: "<<marks.hindi<<endl;
    }
    void setName(string ename){
        name= ename;
    }
    void setRoll_no(int eroll_no){
        roll_no = eroll_no;
    }
    void setMarks1(int emath){
         marks.maths = emath;
    }
    void setMarks2(int escience){
        marks.maths = escience;
    }
    void setMarks3(int eenglish){
        marks.maths = eenglish;
    }
    void setMarks4(int ehindi){
        marks.maths = ehindi;
    }
    string getName(){
        return name;
    }
    int getRoll_no(){
        return roll_no;
    }
    Marks getMarks(){
        return marks;
    }
    float getAvg(){
        float avg;
        avg =((float)marks.maths + marks.science + marks.english + marks.hindi)/4;
        return avg; 
    }

    char getGrade(){
        float avg = getAvg();
        if(avg>80){
            return 'A';
        }else if(avg>=70){
            return 'B';
        }else if(avg>=60){
            return 'C';
        }else if(avg>=50){
            return 'D';
        }else{
            return 'F';
        }
    }
};

int main(){
    Student stu1("parul", 55 , {10, 17, 70, 50});
    stu1.print();  
    cout<<stu1.getAvg()<<endl;
    cout<<stu1.getGrade()<<endl;

}