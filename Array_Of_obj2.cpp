#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

class Product{
    public:
    string Name;
    float Price;
    string Type;

    Product(string eName, int ePrice, string eType){
        Name = eName;
        Price = ePrice;
        Type = eType;
    }
    Product(){}
};
int main(){
    Product products[3];
    for(int i=0; i<3; i++){
        cout<<"Product: "<<i+1<<endl;
        Product p;
        cout<<"Name: ";
        cin>>p.Name;
        cout<<"Price: ";
        cin>>p.Price;
        cout<<"Type: ";
        cin>>p.Type;

        products[i] = p;
    }

    float totalPrice = 0.0;
    for(int i = 0; i<3; i++){
        if(products[i].Type == "elect"){
            totalPrice+=products[i].Price;
        }
    }
    cout<<"total amount of....."<<totalPrice<<endl;
}