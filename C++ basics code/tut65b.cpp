#include<iostream>
using namespace std;

template<class T1, class T2>
class Cash{
    public:
        T1 value;
        T2 currency;
        Cash(T1 a, T2 b){
            value = a;
            currency = b;
        }
        void display(){
            cout<<"Your currency is "<<currency<<" and its value in rupees is Rs "<<value<<endl;
        }
};

int main(){
    Cash<float, char> Salary(75.64, '$');
    Salary.display();
    return 0;
}