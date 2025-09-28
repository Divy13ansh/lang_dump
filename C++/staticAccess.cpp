#include<iostream>
using namespace std;

class A{
    public:
        static int a;
         static void changeA(A b1);
};
void changeA(A b1){
    b1.a = 17;
}

int A::a = 10;
int main(){
    A a1;
    a1.a = 19;
    cout<<a1.a;
    changeA(a1);
    cout<<a1.a;
}