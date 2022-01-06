#include<iostream>

using namespace std;

 typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;

union money
{
    int rice;
    char car;
    float pounds;
};


int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1=dinner;
    cout<<breakfast<<endl; 
    cout<<lunch<<endl;
    cout<<m1<<endl;

    // union money m1;
    // m1.rice=4;
    // m1.pounds=23;
    // cout<<m1.rice<<endl;
    // cout<<m1.pounds<<endl;
    // struct employee shivanshu;
    // ep kamal;

    // shivanshu.eId=2;
    // shivanshu.favChar='c';
    // shivanshu.salary=100000;

    // kamal.eId=4;
    // kamal.favChar='d';
    // kamal.salary=200000;

    
    // cout<<shivanshu.eId<<endl;
    // cout<<shivanshu.favChar<<endl;
    // cout<<shivanshu.salary<<endl;
    // cout<<endl;
    // cout<<kamal.eId<<endl;
    // cout<<kamal.favChar<<endl;
    // cout<<kamal.salary<<endl;

    return 0;
}