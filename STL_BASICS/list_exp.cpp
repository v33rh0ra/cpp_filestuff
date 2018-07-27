/*
* List
* Properties:
* 1. Fast insert/remove at any place: O(1)
* 2. slow search: O(n)
* 3. no random acess, no array[] operator
*/

#include <list>
#include <iostream>
using namespace std;

int main(){
    list<int> myList;// = {5, 2, 9};
    myList.push_back(5);
    myList.push_back(2);
    myList.push_back(9);
    
    myList.push_back(6);
    myList.push_front(4);

    list<int>::iterator itr = find(myList.begin(), myList.end(), 2); //itr-->2
    myList.insert(itr,8); //myList { 4, 5, 8, 2, 9, 6}
                          // O(1), faster than vector or deque
    itr++;                // itr --> 9
    myList.erase(itr);    // myList: {4, 5, 8, 2, 6} O(1)
    //myList1.splice(itr, myList2,itr_a,itr_b); //O(1)
    return 0;
}