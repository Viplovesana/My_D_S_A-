
//what is template ??

//it is a genral or genric format is called template.........
//template function reducing the function overloading........
//there are two type of template aree
//1 class template
//2 function template 



#include <iostream>
using namespace std;
template <class a>
a increament (a val)
{
    return val+1;
}
int main()
{
   cout<<increament(80);
}
