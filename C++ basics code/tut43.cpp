#include<iostream>

using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Kaise ho?"<<endl;
        }        
};

class derived : public base1, public base2{
    private:
        int a;    
    public:
        void greet(){
            base2::greet();
        }    
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D : public B{
    // D's new say() method will override the base class B's say() method
    public:
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
};
int main(){
    // Ambiguity 1
    // derived der;
    // base1 b1;
    // base2 b2;
    // b1.greet();
    // b2.greet();
    // der.greet();

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}