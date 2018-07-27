/*
* map - no duplicates
* multimap - allows duplicates
* multimap<char,int> mymap;
* keys cannot be modified
* type of *it: pair<const char, int>
* (*it).first='d'; //Error
* Properties:
*
*/

#include <map>
#include <iostream>
using namespace std;

void display(map<char,int>& mymap){
    for(map<char,int>::iterator it=mymap.begin();
        it!=mymap.end(); ++it){
            cout<< (*it).first<< " => "<< (*it).second<<endl;
        }
}


int main(){
    map<char,int> mymap;
    mymap.insert( pair<char,int>('a',100));
    mymap.insert( make_pair('b',200));
    display(mymap);

    map<char,int>::iterator it = mymap.begin();
    mymap.insert(it, pair<char,int>('c',300)); // here 'it' is a hint
    display(mymap);

    it = mymap.find('c'); //O(log(n))



    return 0;
}