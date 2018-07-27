/*
* Deque
* Properties:
* 1. Deque has a similar interface with vector
* 2. fast insert/remove at the beginning and the end
* 3. slow insert/remove in the middle: O(n)
* 4. slow search: O(n)
*/
#include <deque>
#include <iostream>
using namespace std;

int main(){
    deque<int> deq;//= { 4, 6, 7 };
    deq.push_front(2); //deq:{ 2, 4, 6, 7 }
    deq.push_back(3); //deq:{ 2, 4, 6, 7, 3 }

    cout<<deq[0]<<endl;
    return 0;
}
