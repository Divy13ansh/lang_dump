#include<iostream>
using namespace std;

class Base{
    public:
        virtual void Show(){
            cout<< "hi";
        }
};

class Derived : public Base{
    int x;
    public:
        Derived(int x){
            this->x = x;
        }
        void Show(){
            cout<<"bye";
        }
};

int main(){
    Derived d(10);
    Base b = d;
    b.Show();
}