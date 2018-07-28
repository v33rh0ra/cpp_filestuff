/*
* unordered set
* Properties of Unordered Containers
* 1. Fastest search/insert at any place: O(1)
*   Associative Conatiner takes O(log(n))
*   vector,deque takes  O(n)
*   list takes O(1) to insert, O(n) to search
* 2. Unordered set/multiset: element value cannot be changed
*    Unordered map/multimap: element key cannot be changed
*
*/
#include <unordered_set>
#include <vector>
#include <iostream>
#include <string>
using namespace std;


void display(unordered_set<string>& myset){
    for(unordered_set<string>::iterator itr=myset.begin();
        itr!=myset.end(); ++itr){
            cout<<*itr<<" ";
        }
        cout<<endl;
}

int main(){
    unordered_set<string> myset;// = {"red", "green","blue"};
    myset.insert("red");
    myset.insert("green");
    myset.insert("blue");
    display(myset);

    unordered_set<string>::const_iterator itr = myset.find("green");
    if( itr!= myset.end()){ //Important Check
        cout<< *itr <<endl;
    }
    myset.insert("yellow"); // O(1)

    vector<string> vec;// = {"purple","pink"};
    vec.push_back("purple");
    vec.push_back("pink");
    myset.insert(vec.begin(),vec.end());

    display(myset);
    // Hash Table specific APIs
    cout<< "load_factor = "<<myset.load_factor() <<endl;
    string x = "red";
    cout<< x <<" is in bucket #"<<myset.bucket(x) <<endl;
    cout<<" Total buckets: "<<myset.bucket_count() <<endl;
    return 0;
}