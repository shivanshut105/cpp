#include<iostream>
#include<fstream>

using namespace std;
// These are some useful classes for working with files in C++

//1. fstreambase
//2. ifstream --> derived from fstreambase
//3. ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

//1. Using the constructor
//2. Using the member function open() of the class

int main(){
    string st = "Harry bhai";
    string st2;
//Opening file using constructors and writing from it
    ofstream out("sample60.txt");
    out<<st;

//Opening file using constructors and reading from it
    // ifstream in("sample60b.txt");
    // in>>st2; //only one word of first line will come using this technique
    // To get a full line we need to use a function
    // getline(in, st2);
    // cout<<st2;
    return 0;
}