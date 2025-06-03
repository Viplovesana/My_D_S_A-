
//.........................................INSERTION SORT....................................................



#include<iostream>
using namespace std;
int main()
{
int c=0;
int arr[]={1,3,2,4,5 };
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<endl;
}

    cout<<"after"<<endl;

for (int i=1;i<s;i++)
{
    int mins=i;
while(mins>0 && arr[mins]<arr[mins-1])


{
    c++;
    int sw;
    sw=arr[mins];
    arr[mins]=arr[mins-1];
    arr[mins-1]=sw;
    mins--;
}    
   
}
cout<<"count hit"<<c<<endl;
for(int i=0;i<s;i++)
{
    cout<<arr[i]<<endl;
}
} 