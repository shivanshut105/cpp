#include<iostream>

using namespace std;

class complex{
    int real, imaginary;
    public:
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
        void getdata(void){
            cout<<"The real part of complex is "<<real<<endl;
            cout<<"The imaginary part of complex is "<<imaginary<<endl;
        }    
};

int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setdata(1, 54); is exactly same as
    ptr->setdata(1, 54);

    // (*ptr).getdata(); is as good as
    ptr->getdata();

    // Array of objects
    complex *ptr1 = new complex[3];
    ptr1->setdata(1, 4);
    ptr1->getdata();
    (ptr1+1)->setdata(2, 6);
    (ptr1+1)->getdata();
    (ptr1+2)->setdata(3, 8);
    (ptr1+2)->getdata();
    return 0;
}