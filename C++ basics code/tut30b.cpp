#include<iostream>

using namespace std;

class point{
    int x, y;
    public:
    point(int a, int b){
        x=a;
        y=b;
    }
    void printpoint(){
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }
};

int main(){
    point p1(3, 5);
    p1.printpoint();
    point p2 = point(4, 7);
    p2.printpoint();
    return 0;
}