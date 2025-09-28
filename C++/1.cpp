#include<iostream>
using namespace std;


class Base{
    static int a;
    public:
    static int getA(){
        return a;
    }
};
int Base::a = 0;
// we can't define the values of non static data members outside the class.
int main(){
    //non static member reference should be given with objects.
    // it would not have worked if the function was non static
    cout<< Base::getA();
}