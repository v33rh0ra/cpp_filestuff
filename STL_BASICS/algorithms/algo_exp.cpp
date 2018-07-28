/* Algorithms
* - Mostly Loops
*/
#include <vector>
#include <iostream>
using namespace std;

void display(vector<int>& x){
    for(vector<int>::iterator itr=x.begin(); itr!=x.end(); ++itr){
        cout<< *itr << " ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec = { 4, 2, 5, 1, 3, 9};
    display(vec);
    vector<int>::iterator itr = min_element(vec.begin(), vec.end()); //itr -> 1
    // 1. Algorithm always process range in half-open way: [begin, end)
    sort(vec.begin(), itr); // vec: { 2, 4, 5, 1, 3, 9}
    display(vec);
    reverse(itr, vec.end()); // vec: { 2, 4, 5, 9, 3, 1 } itr -> 9
    display(vec);
    // 2, 
    vector<int> vec2(3);
    copy(itr, vec.end(), //source
        vec2.begin()); //destination
        // vec2 needs to have space for atleast 3 elements
    display(vec2);
    display(vec);
}
