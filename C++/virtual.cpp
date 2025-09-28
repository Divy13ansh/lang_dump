#include<iostream>
using namespace std;

class Base{
    public:
    virtual void abc(){
        cout<<"Base";
    }
};
class Derived: public Base{
    public:
    virtual void abc(){
        cout<<"Derived";
    }
};
class Derived2: public Derived{
    public:
    virtual void abc(){
        cout<<"Derived2";
    }
};

int main(){
    Derived d;
    Derived2 d2;
    // Base *p1=&d;
    Base *p1 = &d2;
    p1->abc();
}