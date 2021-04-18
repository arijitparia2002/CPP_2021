#include <iostream>
using namespace std;

class calculator
{
private:
    double number1, number2;

public:
    calculator(double a, double b)
    {
        number1 = a;
        number2 = b;
    }
    void add()
    {
        cout << "Addition of numbers is : "
             << (number1 + number2) << endl;
    }
    void sub()
    {
        cout << "Substraction of numbers is : " << (number1 - number2) << endl;
    }
    void mul()
    {
        cout << "Multiplication of numbers is : " << (number1 * number2) << endl;
    }
    void div()
    {
        cout << "Division of numbers is : " << (number1 / number2) << endl;
    }
};
int main()
{
    calculator obj[5] = {
        calculator(12.3, 33),
        calculator(12.3, 33),
        calculator(12.3, 33),
        calculator(12.3, 33),
        calculator(12.3, 33)

    };

    for (int i = 0; i < 5; i++)
    {
        cout << "Calculation for Object " << i + 1 << endl;
        obj[i].add();
        obj[i].sub();
        obj[i].mul();
        obj[i].div();
        cout << endl;
    }
    return 0;
}