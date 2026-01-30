#include<iostream>
#include<assert.h>
#include<math.h>
#include<algorithm>
using namespace std;

class Product{
    private:
    string Name;
    string Type;
    float Price;

    public:
    Product(string eName, string eType, float ePrice){
        Name = eName;
        Type = eType;
        Price = ePrice;
    }
    Product(){}
    void setName(string eName){
        Name = eName;
    }
    void setType(string eType){
        Name = eType;
    }
    void setPrice(float ePrice){
        Name = ePrice;
    }

    string getName()const{
        return Name;
    }
    string getType()const{
        return Type;
    }
    float getPrice()const{
        return Price;
    }
};
bool CompareByPrice(const Product& p1, const Product& p2){
    return p1.getPrice() < p2.getPrice();
}
int main(){
    Product products[5] ={
        {"Electric_screw", "Electronic", 550.1},
        {"Truck", "Toy", 200.0},
        {"Tshirt", "Cloth", 700},
        {"Pants", "Cloths", 800},
        {"Modem", "Electronic", 1200.50}
    };
    sort(products, products+5, CompareByPrice);

    for(int i=0; i<5; i++){
        cout<<products[i].getPrice()<<endl;
    }
    cout<<endl;

    string name;
    cout<<"Enter the name of the product: ";
    cin>>name;
    for(int i=0; i<5; i++){
        if(products[i].getName() == name){
            cout<<"The price of "<< name <<" is: "<<products[i].getPrice()<<endl;
            break;
        }else{
            cout<<"Product isn't available."<<endl;
            break;
        }
    }
    return 0;
}
