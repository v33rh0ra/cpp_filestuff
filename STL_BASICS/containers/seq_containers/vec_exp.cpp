/*
* Vector
* Properties:
* 1. fast insert/remove at the end: O(1)
* 2. slow insert/remove at the beginning or middle: O(n)
* 3. slow search: O(n)
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec; //vec.size() == 0
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8); // vec:{4,1,8}; vec.size() == 3

    //vector specific operations
    cout<< vec[2]<<endl;; //8 (no range check)
    cout<<vec.at(2)<<endl; //8 (throw range_error exception of out of range)

    for(int i; i<vec.size(); i++){
        cout<< vec[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator itr = vec.begin();itr!=vec.end(); ++itr){
        cout<< *itr << " ";
    }
    cout<<endl;

    // for(it:vec) //C++ 11
    //     cout<< it <<" ";
    // cout<<endl;
// vector is a dynamically allocated contiguous array in memory 
    int *p = &vec[0];
    p[2] = 6; //using vector like an array

    if (vec.empty()){
        cout<<" Not empty!"<<endl;
    }

    cout<<"size of vec:"<< vec.size()<<endl;;
    vector<int> vec2(vec); //copy constructor, vec2:{4,1,8}
    vec.clear(); //Remove all items in vec; vec.size()==0
    vec2.swap(vec); // vec2 becomes empty, vec has three items
    for(vector<int>::iterator itr = vec.begin();itr!=vec.end(); ++itr){
        cout<< *itr << " ";
    }
    cout<<endl;
    return 0;
}