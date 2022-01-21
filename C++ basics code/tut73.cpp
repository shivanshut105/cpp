#include<iostream>
#include<map>
#include<string>

using namespace std;

//Map is an associative array
int main(){
    map<string, int> mathmap;
    mathmap["Harry"]=98;
    mathmap["Rohan"]=70;
    mathmap["Rohit"]=54;
    mathmap.insert({{"Kamal",79},{"Pratham",68}});
    map<string,int> :: iterator iter;
    for (iter =mathmap.begin(); iter!=mathmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<mathmap.size()<<endl; //calcutlates the size of map
    cout<<mathmap.empty()<<endl;// checks wether the map is empty or not (false-0 true-1)
    return 0;
}