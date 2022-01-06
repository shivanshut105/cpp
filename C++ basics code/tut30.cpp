#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void printcomp()
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex c1(4, 6);
    c1.printcomp();
    complex c2 = complex(2, 4);
    c2.printcomp();
    return 0;
}