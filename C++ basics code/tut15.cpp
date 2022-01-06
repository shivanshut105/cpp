#include<iostream>

using namespace std;

int sum(int a, int b);
void g(){
    cout<<"Hello,Good Morning"<<endl;
}

int main(){
    int num1, num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"The sum of num1 and num2 is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}