#include<iostream>

using namespace std;

class base{
    protected:
    int a;
    private:
    int b;
};

class derived : base{

};

int main(){
    base x;
    derived y;
    // cout<<y.a<<endl; //Will not work as it is protected in both base as well as derived class.
    return 0;
}