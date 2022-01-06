#include<iostream>
#include<cstring>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }    
        virtual void display(){}
};

class CWHvideo : public CWH{
    float videolength;
    public:
        CWHvideo(string s, float r, float vl):CWH(s, r){
            videolength = vl;            
        }
        void display(){
            cout<<"This is an amazing video of title "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"Videolength is "<<videolength<<" minutes"<<endl;
        }
};

class CWHtext : public CWH{
    int words;
    public:
        CWHtext(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial of "<<title<<endl;
            cout<<"Rating: "<<rating<<endl;
            cout<<"Total word count of this text tutorial "<<words<<endl;
        }
};

int main(){
    CWHvideo djvideo("django tutorial", 4.89, 4.56);
    // djvideo.display();

    CWHtext djtext("django tutorial", 4.12, 450);
    // djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
Rules for virtual functions
  1.  They cannot be static
  2.  They are accessed by object pointers
  3.  Virtual functions can be a friend of another class
  4.  A virtual function in the base class might not be used.
  5.  If a virtual function is defined in a base class, there
      is no necessity of redefining it in the derived class
*/