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
    s.erase(456);
    auto p=s.find(45);
    if(p!=s.end())
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";

    }
    cout<<"\n after del\n";
       for (auto p:s){
        cout<<p<<"\n";
    }
    }


    //segmentation fault where the data cannot find

    