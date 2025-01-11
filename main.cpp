#include<iostream>
using namespace std;

class order
{
    string product_name;
    int quantity;
    double price;
public:
    order( string product_name, int quantity, double price)
    {
        this->product_name=product_name;
        this ->quantity=quantity;
        this ->price = price;

    }
    double calculattotal ()
    {
        return quantity*price;

    }
    void display()
    {
        cout<<"\n product="<<product_name;
        cout<<"\n quantity="<<quantity;
        cout<<"\n price="<<price;
        cout<<"\n total="<< calculattotal();


    }

};


int main()
{
    order aa1("bike",1,560000);
    order aa2("car",2,1560000);

    aa1.calculattotal();
    aa1.display();
    aa2.calculattotal();
    aa2.display();



}
