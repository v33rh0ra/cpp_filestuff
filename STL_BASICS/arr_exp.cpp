/*
* Array
* The size cannot be changed
* array elemnts with different sizes are of different types
*/
#include <array>
#include <iostream>
using namespace std;

int main(){
    int a[3] = {3, 4, 5};
    array<int, 3> b = {3, 4, 5};
    cout<< b.begin()<<endl;
    cout<<b.end()<<endl;
    cout<<b.size()<<endl;
    // cout<<b.swap()<<end;
    return 0;
}