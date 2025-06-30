//STL=Standard template library
//STL--(1)Itrators--(2)Templates--(Algorithm)

// #include <iostream>
// using namespace std;
// #include<algorithm>
// #include <string>   
// int main()
//     {
//         string a(5,'j');
//         cout<<a<<"\n";
//         string j ="829173";
//         sort(j.begin(),j.end() ,less<int>());//it eill give the less value
//         cout<<j<<endl;

//         sort(j.begin(),j.end(),greater<int>());//it will give the greater value
//         cout<<j<<endl; 

//         cout<<j.size()<<endl;//j.size will give the actuall size of the array
//         j.resize(3);    //.resize will cretae the size of the array
//         cout<<"j = "<<j<<endl;       
//     }
// int main()
// {
//     string j="12345";
//     cout<<j<<endl;

//     string S= "cybrombhopal";
//     cout<<S<<endl;
//     cout<<S.find("rom")<<endl;

//     cout<<S.back()<<endl;
//     cout<<S.front()<<endl;
//     cout<<j+S<<endl;

//     j.append(S);//both j and S will merge together
//     cout<<"j="<<j<<endl;
    
//     j.insert(2,"hello");
//     cout<<"new j ="<<j<<endl;//it will insert between or insert anywhere in the index
    
//     string h ="mpnagar";
//     cout<<"h = "<<h<<endl;
//     h.erase(2,3);//it will erase the value between the index
//     cout<<"after erase value = "<<h<<endl;
//     h.clear();
//     cout<<h;


// }

// ..........................Assignnment..............................//

//......WAP where the string is ANAGRAM or not.................

#include <iostream>
using namespace std;
int main()
{
  
 char s1 [10]="listen";
 char s2 [10]="silents";
 int c[26] ={0};
 for (int i=0;s1[i]!='\0';i++)
 {
   c[s1[i]-'s']++;
 } 
for (int i=0;s2[i]!='\0';i++)
{
   c[s2[i]-'a']--;
}
bool p=true;
for(int i=0;i<26;i++)
{
  if(c[i]!=0)
  {
    p=false;
    break;
  }
}   
if(p)
{
  cout<<"anagram";
}
else
{
  cout<<"not an anagram";
}
}