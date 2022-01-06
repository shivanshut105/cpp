#include<iostream>

using namespace std;

class bankdeposit{
    int principal;
    int years;
    float interest;
    float returnvalue;
    
    public:
    bankdeposit(){}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int R);
    void show();
};

bankdeposit::bankdeposit(int p, int y, float r){
    principal = p;
    years = y;
    interest = r;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1 + interest);
    }
}
bankdeposit::bankdeposit(int p, int y, int r){
    principal = p;
    years = y;
    interest = float(r)/100;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1 + interest);
    }
}

void bankdeposit::show(){
        cout<<endl<<"The principal amount was "<<principal
        <<". The return value after "<<years
        <<" years is "<<returnvalue<<endl;
    }

int main(){
    bankdeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}