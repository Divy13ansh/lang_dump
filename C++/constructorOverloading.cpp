#include<iostream>
using namespace std;
class Employee{
    string name;
    protected:
    string lastname;
    public:
    int salary,age;
    Employee(){
        salary = 0;
        age = 0;
        name = "Unknown";
        lastname = "abce";
    }
    Employee(string a, int yr, int sl){
        name = a;
        age = yr;
        salary = sl;
    }
};

class Teacher : protected Employee{

};

// class Teacher : public Employee{

// };

// class Teacher : private Employee{

// };
int main(){
    // Employee e1;
    // cout<<e1.name<<e1.age<<e1.salary<<endl;
    // Employee e2("abc",19,20000);
    // cout<<e2.name<<e2.age<<e2.salary<<endl;
    Teacher t1;
    cout<<t1.salary;
    cout<<t1.lastname;
    cout<<t1.name;
}