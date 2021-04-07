#include <iostream>
using namespace std;
class computer
{
    int price;

public:
    void setPrice(int n)
    {
        price = n;
    }
    int getPrice()
    {
        return price;
    }
    void display()
    {
        cout << "Price of Computer is : " << price << endl;
    }
};
class Mobile
{
    int Mprice;

public:
    void operator=(computer c)
    {
        Mprice = c.getPrice();
    }
    void display()
    {
        cout << "Price of Mobile is : " << Mprice << endl;
    }
};
int main()
{
computer c1;
Mobile m1;
c1.setPrice(350000);
m1 = c1;
c1.display();
m1.display();
    return 0;
}