/*
* associative array <no such container exists>
*  can be impl using map and unordered map
* Properties:
* 1. search time: unordered_map - O(1), map - O(log(n))
* 2. Unordered map may degrade to O(n)
* 3. cant use with multimap and unordered multimap, they dont have [] operator
*/

#include <map>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

// void display(map<char,int>& mymap){
//     for(map<char,int>::iterator it=mymap.begin();
//         it!=mymap.end(); ++it){
//             cout<< (*it).first<< " => "<< (*it).second<<endl;
//         }
// }
void display(unordered_map<char,string>& x ){
    for(unordered_map<char,string>::iterator itr=x.begin();
         itr!=x.end(); ++itr){
        cout<< (*itr).first << " => "<< (*itr).second <<endl;
    }
}
void foo(const unordered_map<char,string>& m){
    // m['S'] = "SUNDAY";
    // cout<<m['S']<<endl;
    auto itr = m.find('S');
    if(itr != m.end()){
        cout << (*itr).first<< " ==>" <<(*itr).second << endl;
    }
}

int main(){
    unordered_map<char, string> day = {{'S',"Sunday"},{'M',"Monday"}};
    cout << day['S'] <<endl; //No range check
    cout<< day.at('S')<<endl; //Has range check
    vector<int> vec = {1,2,3};
    vec[5] =  5; //compile error

    day['W'] = "Wednesday"; // Inserting {'W', "Wednesday"}
    day.insert(make_pair('F', "Friday"));
    
    day.insert(make_pair('M',"MONDAY")); // failed to modify as its an unordered map
    cout<<day.at('M')<<endl;

    //subscript operator provides write access to the container
    day['M'] = "MONDAY";
    cout<<day.at('M')<<endl;

    display(day);
    foo(day);
    return 0;
}