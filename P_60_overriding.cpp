#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "I am a parant class .. " << endl;
    }
};
class B : public A
{
public:
    void show() // overwritten func.
    {
        cout << "I am a child class .. " << endl;
    }
};

int main()
{
    B b1;
    b1.show();
    return 0;
}