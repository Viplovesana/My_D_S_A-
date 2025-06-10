
#include<iostream>
using namespace std;
void merges(int arr[],int low,int high)
{
    int b[high+1];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
   {
b[k]=arr[i];
i++;
}
else
{
    b[k]=arr[j];
    j++;
}
k++;
    }
    while(i<=mid)
{
    b[k]=arr[i];
    i++;
    k++;
}
while(j<=high)
{
    b[k]=arr[j];
    j++;
    k++;
}
for(int i=low;i<=high;i++)
}

void mergesort(int arr[],int low, int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,high);
        mergesort(arr,mid+1,high);
        merges(arr,low,mid,high);
    }
}
int main()
{
    int arr[]={5,9,2,6,9,4,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<endl;
    }
    mergesort(arr,0,size-1):
    cout<<"After mergesort"<<endl;
    for (int i=0;i<s;i++){
        cout<<arr[i]<<endl;
    }
}