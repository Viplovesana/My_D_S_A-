
// #include<iostream>
// using namespace std;
// int part (int arr[],int low ,int high)
// {
// int pv=arr[low];
// int i=low+1;
// int j=high;
// int tmp;
// do
// {
// while(arr[i]<pv)
// {
// i++;
// }
// while(arr[j]>pv)
// {
// j--;
// }
// if(i<j)
// {
// tmp=arr[j];
// arr[j]=arr[i];
// arr[i]=tmp;
// }
// }
// while(i<j);
// tmp=arr[low];
// arr[low]=arr[j];
// arr[j]=tmp;
// return j;
// }
// void qksort(int arr[],int low,int high)
// {
// int pvt;
// if(low<high)
// {
// pvt=part(arr,low,high);
// qksort(arr,low,pvt-1);
// qksort(arr,pvt+1,high);
// }
// }
// int main()
// {
// int arr[]={4,10,3,7,8,5,9};
// int s=sizeof(arr)/sizeof(arr[0]);
// for (int i=0;i<s;i++)
// {
// cout<<arr[i]<<endl;
// }
// qksort(arr,0,s-1);
// cout<<"After applying quick sort"<<endl;
// for (int i=0;i<s;i++)
// {
// cout<<arr[i]<<endl;
// }
// }




#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,6,9,2,8,1,22,3};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<endl;
    }
}