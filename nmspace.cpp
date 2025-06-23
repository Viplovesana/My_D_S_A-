//**NAMESPACE *//
//Namespace is a collection of identifiers.
//It removes the ambiguty
//In namespace the variable is excess by the scope resolution::operator

#include <iostream>
using namespace std;
namespace cybrom
{
    int a = 90;
    int b = 20;

}
int main(){
    cout <<cybrom::a+cybrom::b;
}