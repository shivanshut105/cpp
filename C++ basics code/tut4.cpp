#include<iostream>

using namespace std;
int glo = 9;
void sum()
{
    cout<<glo;
}

// this function is to type hello world
int main()
{
    int glo = 7;
    glo = 44;
    int a = 5, b = 7;
    float c = 3.79;
    char k = 'd';
    bool if_true = true;
    
    sum();
    cout<<glo;

    // cout <<"The value of a is "<<a<<".\nThe value of b is "<<b<<"."<<"\nThe value of c is "<<c<<".\n";
    // cout <<k<<" has a value of "<<if_true<<".";
    return 0;
    }