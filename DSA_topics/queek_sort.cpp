
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


////..................................................................................

// #include<iostream>
// using namespace std;
// int part(int arr[], int low ,int high){
//     int pvt=arr[low];
//     int i=low+1;
//     int j=high;
//     int swp;

//     do{
//       while(arr[i]<pvt){
//         i++;
//       }
//    while(arr[j]>pvt){
//         j--;
//       }
//       if(i<j){
//         swp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=swp;
//       }
//     }while(i<j);
//      swp=arr[j];
//      arr[j]=pvt;
//      pvt=swp;
//     return j;
//     }

// void Quicksort(int arr[], int low ,int high){
//     int pivot;
//     if(low<high){
//         pivot=part(arr, low, high);
//         Quicksort(arr, low , pivot-1);
//         Quicksort(arr, pivot+1, high);                
//     }

// }

// int main(){
//     int s;
//     cout<<"Enter the size of array :";
//     cin>>s;
//     int arr[s];
//     for(int i=0;i<s;i++){
//         cin>>arr[i];
//     }
//     Quicksort(arr, 0, s-1);
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<" ";
//     }
// }


///.................................................................

#include<iostream>
using namespace std;
int partfun(int arr[],int low ,int high)
{
    int pvt = arr[low];
    int i = low+1;
    int j =high;
    int swp;
    
    do{
        while(arr[i]<pvt){
            i++;
        }
        while(arr[j]>pvt){
            j--;
        }
        if(i<j){
            swp=arr[j];
            arr[j]=arr[i];
            arr[i]=swp;
        }
    }
    while(i<j);
    swp=arr[j];
    arr[j]=pvt;
    pvt=swp;
    return j;
}
void Quicksort(int arr[],int low,int high)
{
    int pivot;
    if(low<high){
        pivot=partfun(arr,low,high);
        Quicksort(arr,low,pivot-1);
        Quicksort(arr,pivot+1,high);
    }
}
int main()
{
    int s;
    cout<<"Enter the size of an array :"<<endl;
    cin>>s;
    int arr[s];
    cout<<"Enter "<<s<<" values"<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    Quicksort(arr,0,s-1);
    cout<<"After sorted Array"<<endl;

    for(int i=0;i<s;i++){
        cout<<arr[i]<<endl;     
    }   
}