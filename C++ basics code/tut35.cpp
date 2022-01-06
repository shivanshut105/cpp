#include<iostream>

using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This time constructor is called for object no. "<<count<<endl;
    }
    // Destructors takes no arguments and they also don't return anything
    ~num(){
        cout<<"This time destructor is called for object no. "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"This is our main function"<<endl;
    cout<<"We are creating our first object n1"<<endl;
    num n1;
    {
        cout<<"Entering the code block"<<endl;
        cout<<"Creating two new objects n2 & n3"<<endl;
        num n2, n3;
        cout<<"Exiting the code block"<<endl;
    }
    cout<<"Back to main function"<<endl;
    return 0;
}