#include<iostream>
#include<cmath>
using namespace std;
/*
 You have to create 2 classes:

    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
    3. Create another class HybridCalculator and inherit it using these 2 classes
 Also, answer the questions given below.

    --> What type of Inheritance are you using?
    --> Which mode of Inheritance are you using?
    --> Create an object of HybridCalculator and display results of simple and scientific calculator.
    --> How is code reusability implemented?
*/

class SimpleCalculator{
    protected:
        int input1;
        int input2;
    public:
        void setdata1(int a, int b){
            input1 = a;
            input2 = b;        
        }
        void calculate1(){              
            cout<<"The sum of these 2 values is "<<input1 + input2<<endl;
            cout<<"The difference of these 2 values is "<<input1 - input2<<endl;
            cout<<"The product of these 2 values is "<<input1 * input2<<endl;
            cout<<"The division of these 2 values is "<<input1 / input2<<endl;
        }    
};

class ScientificCalculator{
    protected:
        int input3, input4;
    public:
        void setdata2(int c, int d){
             input3 = c*3.14/180;
             input4 = d*3.14/180;     
        }        
        void calculate2(){
            cout<<"The sine of first value is "<<sin(input3)<<endl;         
            cout<<"The sine of first value is "<<sin(input3)<<endl;         
            cout<<"The cos of second value is "<<cos(input4)<<endl;         
            cout<<"The cos of second value is "<<cos(input4)<<endl;         
        }   
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{};
int main(){
    HybridCalculator harry;
    int a1, b1;
    cout<<"Enter the 2 values"<<endl;
    cin>>a1>>b1;
    harry.setdata1(a1, b1);
    harry.setdata2(a1, b1);
    harry.calculate1();
    harry.calculate2();
    return 0;
}