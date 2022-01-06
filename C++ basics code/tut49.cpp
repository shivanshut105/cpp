#include<iostream>

using namespace std;

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j) //Initialization section or Initialization list
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : a(i), b(2 * j)
        // Test(int i, int j) : b(j), a(i + b) //--> RED FLAG this will create problems because a will be initilaized first as it is declared first 
        Test(int i, int j) : a(i)
        {
            b = j;
            cout<<"Test constructor is called"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Test T(4, 6);
    return 0;
}