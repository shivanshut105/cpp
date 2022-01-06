#include<iostream>

using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter the id "<<endl;
        cin>>id; 
        count++;   
    }
    void getdata(void){
        cout<<"The employee with id "<<id<<" is employee no. "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count=1000;

int main(){
    Employee Shivanshu, Kamal , Yash;

    Shivanshu.setdata();
    Shivanshu.getdata();
    Employee::getcount();

    Kamal.setdata();
    Kamal.getdata();
    Employee::getcount();

    Yash.setdata();
    Yash.getdata();
    Employee::getcount();

    return 0;
}