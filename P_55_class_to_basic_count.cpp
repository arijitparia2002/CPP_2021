#include <iostream>
using namespace std;

class Count
{
    int num;

public:
    void setData()
    {
        cout << "Enter Your Num : " << endl;
        cin >> num;
    }
    int countDigit()
    {
        int n = num;
        int count = 0;
        while (n != 0)
        {
            n = n / 10;
            ++count;
        }
        return count;
    }

    operator int()
    {
        return countDigit();
    }
};

int main()
{
    Count c1;
    c1.setData();

    int res;
    res = c1;
    cout << "The count of digits is : " << res << endl;
    return 0;
}
