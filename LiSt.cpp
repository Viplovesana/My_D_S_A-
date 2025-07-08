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

}