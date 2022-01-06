#include<iostream>

using namespace std;

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int a;
    cout<<"Enter the position at which you want to calculate the fibonacci value"<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The fibonacci value at postion "<<a<<" is "<<fibonacci(a)<<endl;
    return 0;
}