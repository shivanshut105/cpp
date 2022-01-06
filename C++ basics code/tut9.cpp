#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;

// Selection control structure : if - else if - else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not join the party.";
    // }
    // else if (age==18){
    //     cout<<"You can join the party with a kid pass.";
    // }
    // else if(age<1){
    //     cout<<"You are not yet born.";
    // }
    // else{
    //     cout<<"You can join the party.";
    // }
// Selection control structure : switch case statement
    switch (age)
    {
    case 18:
        cout<<"You are 18."<<endl;
        break;
    case 22:
        cout<<"You are 22."<<endl;
        break;
    case 2:
        cout<<"You are 2."<<endl;
        break;
    default:
        cout<<"No special cases."<<endl;
        break;
    }
    cout<<"Done with switch case.";
    return 0;
} 