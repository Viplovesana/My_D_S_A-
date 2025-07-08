#include <iostream>
using namespace std;
int main()
{
    vector<int>v;
    int s,n;
    cout<<"enter the size of vector\n";
    cin>>s;
    cout<<"\nenter value\n"
    for (int i=0;i<s;i++)
    {
        cin>>n;
        v.push_back(n);
    }   
    cout<<"\n stored data in vector\n";
    for (auto k:v)
    {
        cout<<k<<"\t";
    }
}