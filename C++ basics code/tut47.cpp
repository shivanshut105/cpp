#include <iostream>
#include <cmath>

using namespace std;

class Simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performoperationsimple()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};

class Scientificcalclulator
{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performoperationscientific()
    {
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of cos(a) is " << cos(a) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of tan(a) is " << tan(a) << endl;
    }
};

class hybridcalculator : public Simplecalculator, public Scientificcalclulator
{
};
int main()
{
    hybridcalculator harry;
    harry.getdatasimple();
    harry.performoperationsimple();
    harry.getdatascientific();
    harry.performoperationscientific();
    return 0;
}