#include<iostream>

using namespace std;

int main()
{
    int a=4, b=5;

//Arithmetic operators
    cout<<"Below are some of the arithmetic operators "<<endl;
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

//Assignment operators --> used to assign values to variables
//   int a=4 b=6;
//   char d ='d'

//comparison operators
    cout<<"Below are some of the comparison operators "<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;


//Logical operators
    cout<<"Below are some of the logical operators"<<endl;
    cout<<"The value of logical and operator ((a==b) && (a!=b)) is "<<((a==b) && (a!=b))<<endl;
    cout<<"The value of logical or operator ((a==b) || (a!=b)) is "<<((a==b) || (a!=b))<<endl;
    cout<<"The value of logical not operator !(a==b) is "<<!(a==b)<<endl;
    cout<<endl;


    return 0;
}