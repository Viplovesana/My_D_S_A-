// //............forworded_list.........................///


// #include <iostream>
// using namespace std;
// #include<forward_list>
// int main()
// {
//     forward_list<int>f;
//     f.push_front(20); 
//     f.push_front(40);
//     f.push_front(30);
//     f.push_front(12);
//     for (auto p:f)
//     {
//         cout<<p<<"\t";
//     }  
//     f.pop_front();  
//     cout<<"After deletetion\n";
//        for (auto p:f)
//     {
//         cout<<p<<"\t";
//     } 
//     forward_list<int>f2{30,33,34,30,78};
//          for (auto p:f2)
//     {
//         cout<<p<<"\t";
//     } 
//     f2.sort();
//     f2.unique();
//     cout<<"\n unique value\n";
//          for (auto p:f2)
//     {
//         cout<<p<<"\t";
//     } 
//     forward_list<int>f3{100,50,40,13};
//         for (auto p:f3)
//     {
//         cout<<p<<"\t";
//     } 
//     f.sort();
//     f3.sort();
//     f.merge(f3);
//     cout<<"after merge\n";
//       for (auto p:f)
//     {
//         cout<<p<<"\t";
//     }    

// }


// #include <iostream>
// using namespace std;
// #include<list>
// int main()
// {
//     list<int>l1{20,34,12,78};
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";

//     }
//     l1.push_front(100);
//     l1.push_back(200);
//     cout<<"\n front data \n";
//     for (auto p:l1)
//     {
//         cout<<p<<"\t";
//     }
//     l1.pop_back();
//     l1.pop_front();
//     cout<<"\npop data\n";
//     for(auto p:l1)
//     {
//         cout<<p<<"\t";
//     }
// }

// time complicity of dubli in insertion oreder of n and in deletion order of one (1)


// lambda function--it is called single line fuctiob



// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<[](int a , int b){return a>b;} (4,20);
// }

#include <iostream>
using namespace std;
int main()
{
    auto p=[] (int a ,int b){return a>b ;};
    cout<<p(7 , 8);
}











