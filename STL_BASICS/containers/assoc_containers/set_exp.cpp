/*
* set - no duplicates
* multiset - allows duplicates
* multiset<int> myset;
* set/multiset: value of elements cannot be modified
* *it=10; //*it is read only
* 1. Fast Search : O(log(n))
* 2. Traversing is slow ( compared to vector and deque)
* 3. no random access, no [] operator
*/
#include <set>
#include <iostream>
using namespace std;

void display (set<int>& myset){
    for(set<int>::iterator it=myset.begin();it!=myset.end();++it){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    set<int> myset;
    myset.insert(3); // myset: {3}
    myset.insert(1); // myset: {1,3}
    myset.insert(7); // myset: {1,3,7}, O(log(n))

    display(myset);
    
    set<int>::iterator it;

    it = myset.find(7); //O(log(n)), it points to 7
    //sequence containers do not have find() member function
    pair<set<int>::iterator,bool> ret;
    ret = myset.insert(3); //no new element inserted
    if(ret.second==false){
        it = ret.first; //"it" points to element 3
    }
    //The position where 9 will be inserted cannot be decided by you
    //Since this is an ordered set, the poistion will be decided
    //based on its own value
    // but it parameter is used as a hint to find where 9 will be inserted
    // If we provide a good it, we can reduce time from O(log(n) to O(1)
    myset.insert(it,9); // myset: {1, 3, 7, 9} O(log(n)) => O(1)
    display(myset);                    // it points to 3
    myset.erase(it); //myset:{1,7,9}
    display(myset);
    myset.erase(7); //myset:{1,9}
    display(myset);
    return 0;

}