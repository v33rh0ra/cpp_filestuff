#include <iostream>
using namespace std;
// Templates
// int square(int x){
//     return x*x;
// }

// double square(double x){
//     return x*x;
// }

template <typename T>
T square(T x){
    return x*x;
}
//Template has a side effect of code bloat, 
//i.e. both the datatypes will have a different code sections
//Template Class
template <typename T>
class BoVector{
    T arr[100];
    int size;
public:
    BoVector():size(0){}
    void push(T x){ arr[size]=x; size++;}
    T get(int i) const {return arr[i];}
    int getSize() const { return size;}
    void print() const { for(int i=0;i<size;i++){cout<<arr[i]<<endl;}}
};
//Template Operator multiply for BoVector
template <typename T>
BoVector<T> operator* (const BoVector<T>& rhs1, BoVector<T>& rhs2){
    BoVector<T> ret;
    for(int i=0; i<rhs1.getSize();i++){
        ret.push(rhs1.get(i)*rhs2.get(i));
    }
    
    return ret;
};
int main(){
    // cout<<square(5)<<endl;
    // cout<<square(5.5)<<endl;
    cout<<square<int>(5)<<endl;
    cout<<square<double>(5.5)<<endl;
    BoVector<int> bv;
    bv.push(1);
    bv.push(2);
    bv.push(8);
    bv.push(9);
    // bv.print();

    cout<<"Squared bv:"<<endl;
    bv = square(bv);
    bv.print();
    return 0;
}