#include <iostream>
using namespace std;

class Car // parent class // base class
{
    //public:

    int weight = 1200;
    bool big = false;
    int wheels = 4;

public:
    int capacity = 2;
};

class Truck : public Car //'Truck' Child class
{
public:
    int wheels = 8;
    bool big = true;
};

int main()
{
    Truck t1;
    cout << t1.big << " " << t1.wheels
         << " " << t1.capacity << endl; ///only public members are accessible
    return 0;                           ///'big', 'wheels' becoming private to public inside Truck class // which makes it accessible
}