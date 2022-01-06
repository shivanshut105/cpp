#include<iostream>
#include<cstring>

using namespace std;

//Abstract base class is a class which have atleast one pure virtual function.
//Abstract base class is created just for deriving classes from it.
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }  
        /*  
         Pure virtual function -> Do nothing function 
         (To declare a pure virtual function  we need to put its value is equal to 0)
         After declaring a pure virtual function compiler imposes us to redefine that pure virtual function
         in derived classes otherwise compiler will throw an error.
        */
        virtual void display() = 0; //Pure virtual function
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
