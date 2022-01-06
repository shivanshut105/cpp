#include<iostream>

using namespace std;

int product(int a, int b){
    static int c = 0;
    c = c+1; 
    return a*b+c;
}

float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney*factor; 
}

int main(){
//   int a, b;
//   cout<<"Enter the value of a and b"<<endl;
//   cin>>a>>b;
//   cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<"After putting "<<money<<"Rs you will recieve "<<moneyreceived(money)<<"Rs after one year"<<endl;
    cout<<"For VIP:After putting "<<money<<"Rs you will recieve "<<moneyreceived(money,1.1)<<"Rs after one year"<<endl;
    return 0;
}