#include<iostream>
#include<string>

using namespace std;

class binary{
    private:
    string s;
    void bin_check(void);


    public:
    void read(void);
    void display(void);
    void ones_compliment(void);
};

void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary::bin_check(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }   
    } 
}

void binary::ones_compliment(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void binary::display(void){
    bin_check();
    cout<<"Displaying the binary"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main(){
    binary b;
    b.read();
    // b.bin_check();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}