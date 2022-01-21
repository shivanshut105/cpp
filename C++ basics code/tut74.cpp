#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

//Function objects(Functors):  Function wrapped in a class so that it is available like an object
int main(){
    int arr[]={1,32,7,3,23,89};
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}