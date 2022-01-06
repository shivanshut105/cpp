#include<iostream>

using namespace std;

class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }
    // When no copy constructor is found compiler supplies its own copy constructor
    number(number &obj){
        cout<<"Copy instructor called !!"<<endl;
        a = obj.a;
    }
    void display();
};

void number::display(){
    cout<<"The number assigned is "<<a<<endl;
}

int main(){
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(x);//Copy constructor invoked
    z1.display();

    z2 = z;
    z2.display();//Copy constructor not

    number z3 = z;
    z3.display();//Copy constructor invoked
    return 0;
}