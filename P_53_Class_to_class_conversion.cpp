#include <iostream>
#include <string>
using namespace std;

class A
{

    string name = "Arijit";

public:
    string getString()
    {
        return name;
    }
    void display()
    {
        cout << " The name in ClassA is :" << name << endl;
    }
};

class B
{
    string name2;

public:
    void display()
    {
        cout << " The name in ClassB is :" << name2 << endl;
    }
    void operator=(A a)
    {
        name2 = a.getString();
    }
};

int main()
{
    A a1;
    B b1;
    b1 = a1; //one class object convertyed to another//calling line 30;
    a1.display();
    b1.display();
    return 0;
}