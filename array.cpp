#include <iostream>
using namespace std;
#include <array>
int main()
{
 array<int,5>a{2,5,1,4,5};
 array<int,5>a2{10,20,30,40,50};
 cout<<"size of array="<<a.size()<<endl;
 for (int i=0;i<a.size();i++)
 {
    cout<<a.at(i)<<endl;
 }
 cout<<"first value of array = "<<a.front()<<endl;
 cout<<"last value of array = "<<a.back()<<endl;
 cout<<"array 2 values"<<endl;
 for(int i=0;i<a2.size();i++)
 {
   cout<<a2.at(i)"\t";
 }
}