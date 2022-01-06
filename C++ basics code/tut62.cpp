#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"Just do what you love\n";
    out<<"This is me\n";
    out<<"This is also me";
    out.close();

    ifstream in;
    in.open("sample60.txt");
    string st;
    // in>>st2>>st3;
    // cout<<st2<<st3;
    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}