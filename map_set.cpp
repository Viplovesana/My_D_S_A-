// Set--      


#include<iostream>
using namespace std;
#include<set>
int main(){
    set<int>s;
    s.insert(23);
    s.insert(45);
    s.insert(89);
    s.insert(43);
    s.insert(27);
    s.insert(67);
    for (auto p:s){
        cout<<p<<"\n";
    }
    }