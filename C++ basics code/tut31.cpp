#include<iostream>

using namespace std;

class complex{
    int a, b;
    public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void printnumber(){
        cout<<"Your complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1(3,5);
    c1.printnumber();

    complex c2(6);
    c2.printnumber();

    complex c3;//Don't put any parenthesis() for default constructors having no arguments
    c3.printnumber();
    return 0;
}