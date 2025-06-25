//STL=Standard template library
//STL--(1)Itrators--(2)Templates--(Algorithm)

#include <iostream>
using namespace std;
#include<algorithm>
#include <string>   
// int main()
//     {
//         string a(5,'j');
//         cout<<a<<"\n";
//         string j ="829173";
//         sort(j.begin(),j.end() ,less<int>());//it eill give the less value
//         cout<<j<<endl;

//         sort(j.begin(),j.end(),greater<int>());//it will give the greater value
//         cout<<j<<endl; 

//         cout<<j.size()<<endl;//j.size will give the actuall size of the array
//         j.resize(3);    //.resize will cretae the size of the array
//         cout<<"j = "<<j<<endl;       
//     }
int main()
{
    string j="12345";
    cout<<j<<endl;
    string S= "cybrombhopal";
    cout<<S<<endl;
    cout<<S.find("rom")<<endl;
    cout<<S.back()<<endl;
    cout<<S.front()<<endl;
    cout<<j+S;
}