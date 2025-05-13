//..print an array.......................................

// #include<iostream>
// using namespace std;

// int main(){
// int arr[5]={7,2,9,6,4};

// for (int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }

// }


//..update an array...........................................................

// #include<iostream>
// using namespace std;
// void showdata(int a[])
// {
//     for (int i=0;i<6;i++)
//     {
//         a[i]=a[i]+2;
//         cout<<a[i]<<endl;
//     }                                //...array function is a call by reference by default 
// }                                    //...array carry the same adress by call by refrence 
// int main()
// {
//     int arr[6]={7,3,5,8,6,9};
//     showdata(arr);
//     {
//         cout<<"after"<<endl;
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }
// }


//................................BUBBLE Sort in array assending..........................//


// #include<iostream>
// using namespace std;
// void bubble(int arr[],int s){
//     int temp;
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j+1];      
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[5]={7,2,9,6,4};
//     bubble(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }



//...............BUBBLE sort code optimization................................///

// #include<iostream>
// using namespace std;
// void bubble(int arr[],int s){
//     int temp,c=0;
//     bool v;

//     for(int i=0;i<s;i++){
//             v=false;
//         for(int j=0;j<s-i-1;j++){
//             if (arr[j]>arr[j+1]){
//                 temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//                 v=true;
//             }
//             c++;
        
//         }
//         if(v==false){
//             break;
//         }
        
//     }
//     cout<<"counter :"<<c<<endl;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     bubble(arr,5);
//     for (int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// void bubble(int arr[],int s){
//     int temp,c=0;
//     bool d;
//     for(int i=0;i<s;i++){
//         d=false;
//         for(int j=0;j<s-i-1;j++){
//              c++; 
//             if(arr[j]>arr[j+1]){    
//              temp=arr[j+1];
//              arr[j+1]=arr[j];
//              arr[j]=temp; 
//              d=true ;   
//             }  
//         }
//        if(d==false){
//         break;
//        } 
//     }
//     cout<<"counter hit :"<<c<<endl;
// }
// int main(){
//     int arr[5]={9,3,17,8,6};
//     bubble(arr,5);
//     for (int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }

// }



//.................BUBBLE sort by user input.......................//

#include<iostream>
using namespace std;
void bubble(int arr[],int s){
    int temp;
    for(int i=0;i<s;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int s;
    cout<<"enter the size of an array"<<endl;
    cin>>s;
    int arr[s];
    cout<<"enter "<<s<<" values"<<endl;
    for (int i=0;i<s;i++){
        cin>>arr[i];
    }
    bubble(arr,s);
    cout<<"after :"<<endl;
    for (int i=0;i<s;i++){
        cout<<arr[i]<<endl;
    }
   
}  





