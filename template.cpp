
//what is template ??

//it is a genral or genric format is called template.........
//template function reducing the function overloading........
//there are two type of template aree
//1 class template
//2 function template 



// #include <iostream>
// using namespace std;
// template <class a>   //class is use to change the datatype
// a increament (a val)
// {
//     return val+1;
// }
// int main()
// {
//    cout<<increament(80.1);
// }




//*Two parameter template function */

// #include <iostream>
// using namespace std;
// template <class a ,class b>
// void sum(a x1 ,b x2)
// {
//     cout<< x1+x2;
// }
// int main()
// {
// sum (12,4.5);
// }

//*Two parameter template function with return type function */

// #include <iostream>
// using namespace std;
// template <class a, class b>
// a sum (a x1 ,b x2)
// {
//     return x1 + x2;
// }
// int main()
// {
//    cout<< sum(2,8.4);
// }



//..........................................................................................



//********.........................class template........................


#include <iostream>
using namespace std ;
template <class obj>
class Job{
    public:
    obj v;    
    Job(obj val)
    {
        v=val;
        cout<<"value ="<<v;
    }
};   
int main()
{
Job<float>j(20);
}