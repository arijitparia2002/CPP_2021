#include <iostream>
using namespace std;
class Parent
{

public:
    Parent()
    {
        cout << "I am a parent class. " << endl;
    }
    ~Parent()
    {
        cout << "I am a parent class destructor. " << endl;
    }
};
class Child : public Parent
{
public:
    Child()
    {
        cout << "I am a child class." << endl;
    }
    ~Child()
    {
        cout << "I am a child class destructor." << endl;
    }
};

class Son : public Child
{
public:
    Son()
    {
        cout << "I am a Son class." << endl;
    }
    ~Son()
    {
        cout << "I am a Son class destructor." << endl;
    }
};

int main()
{
    Child c1;
    cout << endl;
    Son s1;
    return 0;
}