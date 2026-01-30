#include<iostream>
using namespace std;

class Smartphonne{
    public:
    virtual void Photo() = 0;
};

class Android : public Smartphonne{
    void Photo(){
        cout<<"Android: Photo clicked\n";
    }
};

class Iphone : public Smartphonne{
    void Photo(){
        cout<<"Iphone: Photo clicked\n";
    }
};
int main(){
    Smartphonne *s1 = new Iphone;
    s1->Photo();

}