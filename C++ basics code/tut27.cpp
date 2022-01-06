#include<iostream>

using namespace std;

class complex;

class calculator{
    public:
    int add(int c, int d){
    return (c+d);
    }
    int SumRealComp(complex , complex);
    int SumImagComp(complex , complex);
};

class complex{
    int a, b;
    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"The complex no. is "<<a<<" + "<<b<<"i"<<endl;
    }
    // Individually declaring functions as friends
    // friend int calculator::SumRealComp(complex, complex);
    // friend int calculator::SumImagComp(complex, complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;
};

int calculator::SumRealComp(complex o1, complex o2){
    return(o1.a+o2.a);
}

int calculator::SumImagComp(complex o1, complex o2){
    return(o1.b+o2.b);
}

int main(){
    complex c1, c2;
    c1.setnumber(1,4);
    c2.setnumber(2,6);
    c1.printnumber();
    c2.printnumber();
    calculator calc;
    int res = calc.SumRealComp(c1, c2);
    cout<<"The sum of real part of c1 & c2 is "<<res<<endl;
    int resC = calc.SumImagComp(c1, c2);
    cout<<"The sum of imaginary part of c1 & c2 is "<<resC<<endl;
    return 0;
}