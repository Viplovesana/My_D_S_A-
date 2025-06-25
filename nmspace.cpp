//**NAMESPACE *//
//Namespace is a collection of identifiers.
//It removes the ambiguty
//In namespace the variable is excess by the scope resolution::operator

// #include <iostream>
// using namespace std;
// namespace cybrom
// {
//     int a = 90;
//     int b = 20;

//     multiply(){
//         cout<<"Multiply="<<a*b;
//     }
// }
// class Bhopal{
//     public:
//     int k1,k2;
// }obj;
// int main(){
//     cout <<cybrom::a+cybrom::b<<endl;
//     cybrom::multiply();
//     cout<<"values of k1 ="<<obj.k1;
//     cout<<"values of k2 ="<<obj.k2;
// }       


// #include <iostream>
// using namespace std;
// namespace cybrom
// {
//     int a =10;
//     int b =20;
//     //any funtion:-
//     multiply(){
//         cout<<"multiply of a*b :"<<endl;
//     }
// }
// namespace mpnagar
// {
//     multiply()
//     {
//         cout<<"this my dsa practice";
//     }
// }
// class Bhopal
// {
// public:
//     int k1;
//     int k2;
    
// }vip;
// using namespace cybrom;
// int main()
// {
//     cout<<"sum of a+b = "<<cybrom::a+cybrom::b<<endl;
//     cybrom::multiply();
//     vip.k1=300;
//     vip.k2=400;
//     cout<<"value of k1"<<vip.k1<<endl;
//     cout<<"value of k1"<<vip.k2<<endl;
//     cout<<b<<endl;
//     mpnagar::multiply();
// }


#include <iostream>
using namespace std;
namespace cybrom
{
    int a =10;
    int b =20;
    multiply(){
        cout<<a*b<<endl;
    }
}
namespace mpnagar{
    multiply()
    {
        cout<<"multiply"<endl;
    }
}

class Job{
public:
    int k1;
}obj;

using namespace cybrom;
int main()
{
    cout<<a+b<<endl;
    multiply();
    mpnagar::multiply();
    obj.k1=300;
    cout<<obj.k1;  
}
