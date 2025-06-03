//write a programm to print a table using recurssion//

#include<iostream>
using namespace std;
void table(int a,int n)
{
    if(n>10)
    {
        return;
    }
    int k;
    k= a*n;
    cout<<k<<endl;
    table(a,n+1);
}
int main()
{
    int a;
    cout<<"Enter any no :-"<<endl;
    cin>>a;
    table(a,1);

}