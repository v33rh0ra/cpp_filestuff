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
//4. Algorithm with function
bool isOdd(int i){
    return i%2;
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
    // 2. target vec needs to have atleast the size of numbers you ar eplanning to copy
    vector<int> vec2(3);
    copy(itr, vec.end(), //source
        vec2.begin()); //destination
        // vec2 needs to have space for atleast 3 elements
    display(vec2);
    display(vec);
    // 3. use back_inserter in the above scenario
    vector<int> vec3;
    copy(itr, vec.end(), back_inserter(vec3)); //inserting instead of overwriting
                        //back insert iterator   , not efficient
    display(vec3);
    vec3.insert(vec3.end() //destination
                 , itr, vec.end()); //source,  efficient and safe
    display(vec3);
    // 4. Algorithm with function
    vector<int> vec5 = { 2,4, 5, 2, 9};
    vector<int>::iterator itr_odd = find_if(vec.begin(), vec.end(), isOdd);
    cout<< *itr_odd <<endl;
    ++itr_odd;
    cout<< *itr_odd << endl;
    //5. Algorithm with native c++ array
    int arr[4] = { 6, 3, 7, 4};
    sort(arr, arr+4);
    // works because pointer behaves like an iterator
    for(int i = 0;i<4;++i){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    
}
