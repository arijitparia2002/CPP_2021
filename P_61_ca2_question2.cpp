#include <iostream>
using namespace std;

class day
{
private:
    int date, month, year;

public:
    day(int x, int y, int z)
    {
        date = x;
        month = y;
        year = z;
    }
    bool operator>(day u)
    {
        if (month > u.month)
            return true;

        else if (month == u.month && date > u.date)
            return true;
        else
            return false;
    }
    void show_date()
    {
        cout << date << " : " << month << " : " << year;
    }
};
int main()
{
    int date1, month1, year1, date2, month2, year2;
    cout << "Enter date 1 : " << endl;
    cout << "The date = ";
    cin >> date1;
    cout << "month = ";
    cin >> month1;
    cout << "year = ";
    cin >> year1;
    cout << "Enter date 2 : " << endl;
    cout << "The date = ";
    cin >> date2;
    cout << "month = ";
    cin >> month2;
    cout << "year = ";
    cin >> year2;

    day d1(date1, month1, year1);
    day d2(date2, month2, year2);
    cout << "**** First Date **** \n";
    cout << "Date is  ";
    d1.show_date();
    cout << "\n**** Second Date **** \n";
    cout << "Date is  ";
    d2.show_date();
    cout << "\n**** Result **** \n";
    if (d1 > d2)
    {
        cout << "Date ";
        d1.show_date();
        cout << " is greater than ";
        d2.show_date();
    }
    else
    {
        cout << "Date ";
        d2.show_date();
        cout << " is greater than ";
        d1.show_date();
    }
    return 0;
}


