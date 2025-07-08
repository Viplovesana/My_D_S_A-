//............forworded_list.........................///


#include <iostream>
using namespace std;
#include<forward_list>
int main()
{
    forward_list<int>f;
    f.push_front(20); 
    f.push_front(40);
    f.push_front(30);
    f.push_front(12);
    for (auto p:f)
    {
        cout<<p<<"\t";
    }  
    f.pop_front();  
    cout<<"After deletetion\n";
       for (auto p:f)
    {
        cout<<p<<"\t";
    } 
    forward_list<int>f2{30,33,34,30,78};
         for (auto p:f2)
    {
        cout<<p<<"\t";
    } 
    f2.sort();
    f2.unique();
    cout<<"\n unique value\n";
         for (auto p:f2)
    {
        cout<<p<<"\t";
    } 
    forward_list<int>f3{100,50,40,13};
        for (auto p:f3)
    {
        cout<<p<<"\t";
    } 
    f.sort();
    f3.sort();
    f.merge(f3);
    cout<<"after merge\n";
      for (auto p:f)
    {
        cout<<p<<"\t";
    }    

}
