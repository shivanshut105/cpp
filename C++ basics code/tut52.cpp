#include<iostream>

using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<"Item id is: "<<id<<endl;
            cout<<"Item price is: "<<price<<endl;
        }
};

int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr; /* This is used because in first loop the ptr will end up at block 3
    and when we will start second loop we need ptr value to be at block 1 so we will use ptrTemp 
    as ptrTemp is a pointer which will point at block 1 so we will get our pointer at first block */

    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter item id and price for item no. "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p, q)
        ptr->setdata(p, q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        ptrTemp->getdata();
        ptrTemp++;
    }
    return 0;
}