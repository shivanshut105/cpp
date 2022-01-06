#include<iostream>

using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);    
};

void student::set_roll_number(int r){
    roll_number = r;
}
void student::get_roll_number(void){
    cout<<"The roll number of the student is "<<roll_number<<endl;
}

class exam : public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void exam::set_marks(float m1, float m2){
    math = m1;
    physics = m2;
}
void exam::get_marks(){
    cout<<"Math marks of the student are "<<math<<endl;
    cout<<"Physics marks of the student are "<<physics<<endl;
    cout<<"Percentage of the student is "<<(math + physics)/2<<"%"<<endl;
}

class results : public exam{
    public:
        void display(){
            get_roll_number();
            get_marks();
        }
};
int main(){
    /*
    Notes:
     If we are inheriting B from A & C from B:[ A--->B--->C ].
        1. A is the base class for B and B is the base class for C.
        2. A--->B--->C is called Inheritence Path.
    */
    results Kamal;
    Kamal.set_roll_number(21);
    Kamal.set_marks(90.0, 92.0);
    Kamal.display();
    return 0;
}