#include<iostream>

using namespace std;

class Y;

class X{
    int val1;
    friend void add(X, Y);
    public:
    void setvalue(int a){
        val1=a;
    }
};
class Y{
    int val2;
    friend void add(X, Y);
    public:
    void setvalue(int b){
        val2=b;
    }
};

void add(X a1, Y b1){
    cout<<"The value of sum of X & Y is "<<(a1.val1+b1.val2)<<endl;
}

int main(){
    X o1;
    Y o2;
    o1.setvalue(24);
    o2.setvalue(58);
    add(o1, o2);
    return 0;
}