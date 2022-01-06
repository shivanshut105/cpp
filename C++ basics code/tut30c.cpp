//calculate the distance between two points

#include<iostream>
#include<cmath>

using namespace std;

class point{
    int x, y;
    public:
    friend void distance(point, point);
    point(int a, int b){
        x = a;
        y = b;
    }
    void printnumber(){
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }
};
void distance(point p, point q){
    float result = sqrt(pow((p.x - q.x),2) + pow((p.y - q.y),2));
    cout<<"The distance between two points is "<<result<<endl;
}

int main(){
    point p1(1,1);
    point p2(6,1);
    p1.printnumber();
    p2.printnumber();
    distance(p1, p2);
    return 0;
}