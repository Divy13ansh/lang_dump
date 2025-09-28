#include<iostream>
using namespace std;
class Employee{
    string name;
    int age;
    string city;
    public:
    Employee(string name,int age,string city){
        this->name = name;
        this->age = age;
        this->city = city;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<city<<endl;
    }
};

void main(){
    Employee e1("abc",21,"Delhi");
    e1.display();
}