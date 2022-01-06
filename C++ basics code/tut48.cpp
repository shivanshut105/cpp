#include<iostream>

using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1{
    int data1;
    public:
        Base1(int x){
            data1 = x;
            cout<<"Base1 constructor is called"<<endl;
        }
        void printdataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int x){
            data2 = x;
            cout<<"Base2 constructor is called"<<endl;
        }
        void printdataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"derived constructor is called"<<endl;
        }
        void printdataderived(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    derived harry(1, 2, 3, 4);
    harry.printdataBase1();
    harry.printdataBase2();
    harry.printdataderived();
    return 0;
}