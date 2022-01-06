#include<iostream>

using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int n1){
            roll_no = n1;
        }    
        void print_number(void){
            cout<<"Your roll no. is "<<roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"Your maths marks is "<<maths<<endl;
            cout<<"Your physics marks is "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        int score;
    public:
        void set_score(int sc){
            score = sc;
        }    
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    protected:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is "<<total<<endl;
        }    
};

int main(){
    Result Harry;
    Harry.set_number(4200);
    Harry.set_marks(80.5, 99.5);
    Harry.set_score(9);
    Harry.display();
    return 0;
}