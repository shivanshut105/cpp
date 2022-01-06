#include<iostream>

using namespace std;

class c2;

class c1{
    int val1;
    friend void swap(c1 &, c2 &);
    public:
    void setval(int a){
        val1=a;
    }
    void display(){
        cout<<val1<<endl;
    }
};
class c2{
    int val2;
    friend void swap(c1 &, c2 &);
    public:
    void setval(int b){
        val2=b;
    }
    void display(){
        cout<<val2<<endl;
    }
};
void swap(c1 & x, c2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 x;
    c2 y;
    x.setval(24);
    y.setval(53);
    swap(x, y);
    cout<<"The value of x after swap is ";
    x.display();
    cout<<"The value of y after swap is ";
    y.display();
    return 0;
}