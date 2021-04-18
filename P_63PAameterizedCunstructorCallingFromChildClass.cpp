#include <iostream>
using namespace std;

class Parent
{
public:
    int x, y;
    Parent(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
};

class Child : public Parent
{
    int z;

public:
    Child(int z1) : Parent(10, 30)
    {
        z = z1;
    }
    void show()
    {
        cout << x << endl
             << y << endl
             << z << endl;
    }
};

int main()
{
    Child c1(10);
    c1.show();
    return 0;
}