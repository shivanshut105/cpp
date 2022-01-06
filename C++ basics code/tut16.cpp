#include<iostream>

using namespace std;

int sum(int a, int b){
    int c= a+b;
    return c;
}
void swappointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swaprefrencevar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){ 
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4, 5);
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    // swappointer(&x,&y);
    swaprefrencevar(x,y);
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    return 0;
}