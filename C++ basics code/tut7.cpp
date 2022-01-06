#include<iostream>

using namespace std;

// int c = 49;

int main()
{
    // int a, b, c;

    // cout<<"Enter the value of a"<<endl;
    // cin>>a;

    // cout<<"Enter the value of b"<<endl;
    // cin>>b;

    // c = a + b;

    // cout<<"The sum of a and b is "<<c<<endl;
    // cout<<"The value of global c is "<<::c<<endl;

    //  :: scope resloution operator


    //*********Float,double and long double Liberals*********

    // float d= 34.4f;
    // long double e= 34.4l;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //*********Reference variables**********
    // Rohan--->rohu--->Dangerous coder    (same person different names)

    // float x = 45.36;
    // float & y = x;

    // cout<<"the value of x is "<<int(y)<<endl;
    // cout<<"the value of x is "<<x<<endl;
    // cout<<"the value of y is "<<y<<endl;

    int a = 45;
    float b = 45.49;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;

    return 0;
}