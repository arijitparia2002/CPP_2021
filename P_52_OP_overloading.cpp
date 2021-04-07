#include <iostream>
using namespace std;

class Time
{
    int hrs, min;

public:
    void display();
    void operator=(int); //overloading func.
};
void Time::display()
{
    cout << "Hours : " << hrs << " Minutes : " << min << endl;
}
void Time::operator=(int t)
{
    cout << "Basic Type to classs type : " << endl;
    hrs = t / 60;
    min = t % 60;
}
int main()
{
    Time t1;
    int mins = 1234;
    t1.operator=(mins);
    t1.display();

    return 0;
}