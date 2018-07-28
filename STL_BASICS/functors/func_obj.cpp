/* Function Objects
*   Example:
* Benefits:
* 1. Smart Function: can remember state
* 2. It  can have its own type
*/
#include <iostream>
#include <string>
using namespace std;

class X {
    public:
    X(int i){}
    void operator()(string str){
        cout<< "Calling functor X with parameter:"<<str<<endl;
    }
    // operator string() const { return "X";} //type conversion function 
};
class AddValue{
    int val;
    public:
    AddValue(int j): val(j){ }
    void operator()(int i){
        cout<< i+val <<endl;
    }
}

int main(){
    // X (8)("Hi");
    X foo(8);
    foo("Hi"); // ÷Calling functor x with parameter Hi

    vector<int> vec={2, 3, 4, 5};
    int x = 2;
    
    for_each(vec.begin(),vec.end(),AddValue(x) );
    return 0;
}