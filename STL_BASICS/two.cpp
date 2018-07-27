//Algorithms -->Iterators-->Containers
//N Algo + M Containers = N+M implementations
/*
* STL: Standard Template Library
* --Data Structures and Algorithms
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vector<int>::iterator itr_start = vec.begin();
    vector<int>::iterator itr_end = vec.end();
    //half-open [begin, end)
    //cout<< *vec.end()<<endl is not valid
    for(vector<int>::iterator itr=itr_start; itr!=itr_end; ++itr){
        cout<< *itr <<" ";
    }
    cout<<endl;
    sort(itr_start,itr_end);
    for(vector<int>::iterator itr=itr_start; itr!=itr_end; ++itr){
        cout<< *itr <<" ";
    }
    cout<<endl;
    return 0;
}
