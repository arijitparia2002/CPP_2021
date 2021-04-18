#include <iostream>
using namespace std;

class Duration
{
    int days;
    int y, m, d;

public:
    Duration(int n)
    {
        days = n;
    }
    void convertion()
    {
        //int y, m, d;
        y = days / 365;
        days = days % 365;
        m = days / 30;
        d = days % 30;
    }
    void display()
    {
        cout << "Years : " << y << "\nMonths : " << m << "\nDays : " << d << endl;
    }
};

int main()
{
    Duration d1(100);
    d1.convertion();
    d1.display();

    return 0;
}
