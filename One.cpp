#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream fin;
    string word;
    fin.open("One.txt");
    while(fin>>word){
        cout<<word<<' ';
    }
    cout<<endl;
    return 0;
}
