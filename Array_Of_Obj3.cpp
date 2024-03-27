#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

class Product
{
private:
    string Name;
    float Price;
    string Type;

public:
    Product(string eName, float ePrice, string eType)
    {
        Name = eName;
        Price = ePrice;
        Type = eType;
    }
    void setName(string eName)
    {
        Name = eName;
    }
    string getName()
    {
        return Name;
    }
    void setPrice(float ePrice)
    {
        Price = ePrice;
    }
    float getPrice()
    {
        return Price;
    }
    void setType(string eType)
    {
        Type = eType;
    }
    string getType()
    {
        return Type;
    }
    // Product() {}
};
int main()
{
    int n;
    cout << "How many Product are there: " << endl;
    cin >> n;
    float totalPrice = 0.0;

    for (int i = 0; i < n; i++)
    {
        string name, type;
        float price;
        cout << "Product " << i << endl;

        cout << "Name: ";
        cin >> name;
        cout << "Type: ";
        cin >> type;
        cout << "Price: ";
        cin >> price;
        Product product(name, price, type);
        if(type == "elect"){
            totalPrice+=price;
        }
    }
    return 0;
}