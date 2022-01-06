#include<iostream>

using namespace std;

class simple{
    int data1, data2;
    public:
    // Constructor with default arguments
    simple(int a, int b=9){
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple::printdata(){
    cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
}
int main(){
    simple s1(3, 5);
    s1.printdata();
    return 0;
}