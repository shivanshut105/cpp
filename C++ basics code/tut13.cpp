#include<iostream>

using namespace std;

int main(){
    int marks[4] = {45, 54, 93, 67};
    int mathmarks[4];
    mathmarks[0] = 83;
    mathmarks[1] = 64;
    mathmarks[2] = 97;
    mathmarks[3] = 23;

    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<"These are math marks"<<endl;      
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    
    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    // }
    int i=0;
    // do
    // {
    //   cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
    //   i++;
    // } while (i<4);
    while (i<4)
    {
        cout<<"The value of marks"<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}