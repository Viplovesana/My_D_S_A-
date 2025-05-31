
#include<iostream>
using namespace std;
int main()
{
int arr[]={3,14,2,5,7};
int s=sizeof(arr)/sizeof(arr[0]);
       qedsre  \
for(int i=0;i<s;i++)
{
cout<<arr[i]<<endl;
}
int i,chotu;
for (int i=0;i<s;i++)
{
chotu=i;
for (int j=i+1;j<s;j++)
{
if(arr[chotu]>arr[j])
{
    chotu=j;
}    
}
if(chotu!=i)
{
int swp;
swp=arr[chotu];
arr[chotu]=arr[i];
arr[i]=swp; 
}
}
cout<<"After selection sort"<<endl;
for (int i=0;i<s;i++)
{
    cout <<arr[i]<<endl;
}     
}