#include<iostream>

using namespace std;

// Base class
class employee{
    public:
    int Id;
    float salary;
    employee(){}
    employee(int inpId){
        Id = inpId;
        salary = 34.0;
    }
};
// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public visibility Mode: Publix members of the base class becomes Public members of the derived class
3. Private visibility Mode: Public members of the base class becomes Privare members of the derived class
4. Private members are never inherited
*/

// Creating a programmer class derived from employee base class
class programmer : public employee{
    public:
    int languagecode;
    programmer(int inpId){
        Id = inpId;
        languagecode = 9;
    }
    void getdata(){
        cout<<Id<<endl;
    }
};

int main(){
    employee Shivanshu(1), Kamal(2);
    cout<<Shivanshu.salary<<endl;
    cout<<Kamal.salary<<endl;
    programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.Id<<endl;
    skillF.getdata();
    return 0;
}