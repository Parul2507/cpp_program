#include<iostream>
#include<cmath>

using namespace std;

class Shape{
    public:
    Shape(){

    }

   virtual void parimeter(){

    }

    virtual void area(){

    }
};

class Triangle : public Shape{
    private:
    int a;
    int b;
    int c;
    public:

    Triangle(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
     void parimeter(){
        cout<<"Parimeter is: "<<a+b+c<<endl;
    }
     void area(){
        int p = (a+b+c)/2;
        int area = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"Area: "<<area <<endl;
    }
};

class Circle : public Shape{
    private:
    int Radius;
    public:

    Circle(int radius){
        Radius = radius;
    }
     void parimeter(){
        cout<<"Parimeter is: "<< 2* Radius * 3.14 <<endl;
    }
     void area(){
        cout<<"Area: "<< 3.14 * Radius * Radius <<endl;
    }
};

class Rectangle : public Shape{
    private:
    int l;
    int b;

    public:

    Rectangle(int l, int b){
        this->l = l;
        this->b = b;
    }
     void parimeter(){
        cout<<"Parimeter is: "<< (l+b)*2<<endl;
    }
     void area(){
        cout<<"Area: "<< l*b <<endl;
    }
};

int main(){
    
    Triangle *t1 = new Triangle(3, 4, 5);
    Triangle *t2 = new Triangle(5, 4, 5);
    
    Circle *c1 = new Circle(69);
    Circle *c2 = new Circle(69);
   
    Rectangle *r1 = new Rectangle(3, 4);
    Rectangle *r2 = new Rectangle(3, 4);

    Shape* arr[] = {
        t1, t2,
        c1, c2,
        r1, r2
    };
    
    for(int i=0; i<5; i++){
        arr[i]->parimeter();
        arr[i]->area();
    }
}