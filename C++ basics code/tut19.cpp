#include<iostream>

using namespace std;

int sum(int a, int b){
    cout<<"This function takes 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"This function takes 3 arguments"<<endl;
    return a+b+c;
}
// This function is for calculating volume of a cube
int volume(int a){
    return a*a*a;
}
// This function is for calculating volume of a cuboid
int volume(int l, int b, int h){
    return l*b*h;
}
// This function is for calculating volume of a cylinder
int volume(int r, int h){
    return (3.14*r*r*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<"The volume of cube having side 4 is "<<volume(4)<<endl;
    cout<<"The volume of cuboid having sides 3, 5 and 2 is "<<volume(3, 5, 2)<<endl;
    cout<<"The volume of cylinder having radius 4 and height 6 is "<<volume(4, 6)<<endl;
    return 0;
}