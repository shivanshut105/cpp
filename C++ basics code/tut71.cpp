#include<iostream>
#include<vector>

using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; //Works same as above syntax.
    }
    cout<<endl;
}

int main(){
    // vector<int> vec1; //Zero length vector
    // int count;
    // cout<<"Enter the size of vector"<<endl;
    // cin>>count;
    // int element;
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<"Enter the value of element : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 2, 566);  //Here iter+i will put 566 before index i
    // display(vec1);
    // vector<char> vec2(4); //4 element character vector 
    // vec2.push_back('c');
    // display(vec2);
    // vector<char> vec3(vec2); //4 element character vector from vec2
    // display(vec3);
    vector<int> vec4(4);
    display(vec4);
    cout<<vec4.size();
    return 0;
}