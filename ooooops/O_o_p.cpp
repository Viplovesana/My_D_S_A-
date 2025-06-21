#include <iostream>
#include <string>
using namespace std;
class Teacher{
private:
 double salary;

public:    
    string name;
    string dept;
    string subject;
    
    void changedept(string newdept){
        dept = newdept;
    }
};
int main(){
    Teacher t1;
    t1.name="viplove";
    t1.dept="computer science";
    t1.salary=45000;
    cout<< t1.name<<endl;
    cout<<t1.dept<<endl;
     cout<<t1.salary<<endl;

    return 0 ;

}