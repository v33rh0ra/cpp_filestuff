/*
* Iterators
*/
#include <vector>
#include <list>
#include <set>
#include <forward_list>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // 1. Random Access Iterator: vector, deque, array
    vector<int>::iterator itr;
    // itr = itr + 5; //advance itr by 5
    // itr = itr - 4;
    // if (itr2>itr1) ... //compare two iterators to see which is in front and back
    // ++itr; //faster than itr++
    // --itr;
    //2. Bidirectional iterator: list, set, map
    list<int>::iterator litr;
    // ++litr;
    // --litr;
    // 3. Forward Iterator : forward_list
    forward_list<int>::iterator fitr;
    // ++fitr;
    // return 0;
    // 4. Input Iterator: read and process values while iterating forward
    // int x = *itr;

    // 5. output iterator: output values while iterating forward
    // *itr = 100;

    // input and output iterator can only move forward
    // Every container has a iterator and const_iterator
    set<int>::iterator sitr;
    set<int>::const_iterator citr; // Read only access to container elements

    set<int> myset = { 2, 4, 5, 1, 9};
    for(citr= myset.begin(); citr!=myset.end();++citr){
        cout << *citr << endl;
        //*citr = 3 --> not possible with const_iterator
    }
    // for_each(myset.cbegin(), myset.cend(), MyFunction); // Only in c++ 11

    // Iterator functions
    // advance(itr,5); // move itr forward by 5 spots. itr+=5
    // distance(itr1,itr2) // measure the distance between itr1 and itr2


    /* Iterator adapter (Predefined Iterator)
    * - A special more powerful iterator
    *  1. Insert Iterator
    *  2. Stream Iterator
    *  3. Reverse Iterator
    *  4. Move Iterator (C++ 11)
    */
    // 1. Insert iterator:
    vector<int> vec1 = {4, 5};
    vector<int> vec2 = {12, 14, 16, 18};
    vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
    insert_iterator< vector<int> > i_itr(vec2, it);
    copy(vec1.begin(), vec1.end(), // source
        i_itr);                    // destination 
    //vec2: { 12, 14, 4, 5, 16, 18}
    // others : back_insert_iterator, front_insert_iterator

    // 2. Stream Iterator:
    vector<string> vec4;
    copy(istream_iterator<string>(cin), istream_iterator<string>(),
    back_inserter(vec4));
    //copy everything from std input and back insert into vec4

    copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout," "));
    // copy from vec4 to std out
    //Make it terse:
    unique_copy(istream_iterator<string> (cin), istream_iterator<string>(),
        ostream_iterator<string>(cout," "));
    
    // 3. Reverse Iterator:
    vector<int> vec = { 4, 5, 6, 7};
    reverse_iterator<vector<int>::iterator> ritr;
    // rbegin points to the last element in the container
    // rend points to one element before the first element
    for (ritr = vec.rbegin(); ritr!=vec.rend(); ritr++){
        cout<< *ritr <<endl; //prints: 7 6 5 4
    }

    return 0;

}

