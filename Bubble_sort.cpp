//..print an array

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5]={7,2,9,6,4};

// for (int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }

// }


//..update an array

#include<iostream>
using namespace std;
void showdata(int a[])
{
    for (int i=0;i<6;i++)
    {
        a[i]=a[i]+2;
        cout<<a[i]<<endl;
    }                                //...array function is a call by reference by default 
}                                    //...array carry the same adress by call by refrence 
int main()
{
    int arr[6]={7,3,5,8,6,9};
    showdata(arr);
    {
        cout<<"after"<<endl;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}
