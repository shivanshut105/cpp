#include<iostream>

using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setdata(void){
        salary=122;
        cout<<"Enter the id of the employee "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"The employee have id "<<id<<endl;
    }
};

int main(){
    // Employee shivi, wala, yoki, ishu;
    // shivi.setdata();
    // shivi.getdata();
    Employee startup[4];
    for (int i = 0; i < 4; i++)
    {
        startup[i].setdata();
        startup[i].getdata();
    }
    return 0;
}