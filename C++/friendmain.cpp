#include<iostream>
using namespace std;

class A{
    int i = 69;
    friend int main();
};

int main(){
    A a;
    cout<<a.i;
}

