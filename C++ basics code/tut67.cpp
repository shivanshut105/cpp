#include<iostream>

using namespace std;

// float numavg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float numavg2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

//We can make function template to use same function for different data types
// (syntax is same as class template)

template<class T1, class T2>
float numavg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T & b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    // a = numavg(3, 4);
    // printf("The sum of two numbers is %.3f\n", a);
    // a = numavg2(3, 4.7);
    // printf("The sum of two numbers is %.3f", a);
    a = numavg(3, 4.4);
    printf("The average of two numbers is %.3f\n", a);
    int x = 4, y = 5;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}