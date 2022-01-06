#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string name;
    ofstream sout("sample60.txt");
    cout<<"Enter your name "<<endl;
    cin>>name;
    sout<<"My name is " + name;
    sout.close();

    ifstream sin("sample60.txt");
    string str;
    // sin>>str; //This will only read first word. To get full word we will use getline.
    getline(sin, str);
    cout<<str;
    sin.close();
    return 0;
}