

#include <iostream>
using namespace std;
// class Cybrom
// {
//    public:
//    int * arr;
//    int n,top;
//    Cybrom(int a)
//    {
//     n=a;
//     arr = new int [n];
//     top=-1;
//    } 
//    void push(int v)
//    {
//     if (top ==n-1)
//     {
//         cout <<"\n Overflow\n";
//         return;
//     }
//     top++;
//     arr [top] =v;
//    }
//    int tops()
//    {
//     if (top == -1)
//     {
//         cout<< "\n underflow \n";
//         return -1;
//     }
//     return arr[top];
//    }
//    void pop()
//    {
//     if (top == -1)
//     {
//         cout<<"\n there is no data\n";
//         return;
//     }
//     top--;
//    }
// };
// int main()
// {
//     int s;
//     cout <<"Enter size of array\n";
//     cin>>s;
//     Cybrom c(s);
//     c.push (12);
//     c.push (15);
//     c.push (56);
//     c.push (98);
//     while(c.top!=-1)
//     {
//         cout<<c.tops()<<endl;
//         c.pop();    
//     }
//     // cout<<c.tops();
//     // c.pop();
//     // c.pop();
//     // c.pop();
//     // cout<<"/n top="<<c.top();


// }
// #include<stack>
// int main()
// {
//     stack<int>st;
//         st.push(2);
//         st.push(3);
//         st.push(1);
//         st.push(29);
//         cout<<st.top();
//         cout<<"size="<<st.size()<<"\n";
//         while(!st.empty())
//         {
//             cout<<st.top()<<"\n";
//             st.pop();
//         }  
// }
// #include<stack>
// int main()
// {
//     stack<int>st;
//         st.push(2);
//         st.push(3);
//         st.push(1);
//         st.push(29);
//         cout<<st.top()<<endl;
//       cout<< "size="<< st.size()<<"\n";
//           while(!st.empty())
//     {
//         cout << st.top() << "\n";
//         st.pop();
//     }
// }



///.............

// Write a program to find out the minimum value in the stack 

#include<iostream>
using namespace std;
#include<stack>

int main(){

  stack<int>st;
 st.push(3);
 st.push(4);
 st.push(5);
 st.push(6);
 st.push(6);
 st.push(2);
  int min=st.top();
 while(!st.empty()){
  if(min>st.top()){
    min=st.top();
  }   
     st.pop();

 }
 cout<<min;
 }

