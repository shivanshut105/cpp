#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
    list<int>::iterator it=l.begin();
    for (it=l.begin(); it !=l.end();it++)
    {
       cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;//empty list of 0 length
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(15);
    list1.push_back(75);
    list1.push_back(6);
    display(list1);
    list1.remove(6); //removes all the 6 from the list
    display(list1);
    // list1.remove(15); //removes any specific element from the list
    // display(list1);
    // list1.pop_back(); //removes last element from the list
    // display(list1);
    // list1.pop_front(); //removes first element from the list
    // display(list1); 
    // list1.sort();//for sorting list
    // display(list1);
    // list1.reverse();//for reversing the list
    // display(list1);
    // list<int> list2(3);
    // list<int>::iterator it=list2.begin();
    // *it=56;
    // it++;
    // *it=9;
    // it++;
    // *it=17;
    // it++;
    // display(list2);
    // list1.merge(list2);//merge list2 in list1
    // display(list1);
    return 0;
}