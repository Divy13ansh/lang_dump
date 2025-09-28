#include<iostream>
using namespace std;

class A{
    private:
    int a;
    int b;
    int c;
    public:
    A(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend void a(A);
    friend void b(A);
    friend void c(A);
};

void a(A d){
    cout << d.a;
}
void b(A d){
    cout << d.b;
}
void c(A d){
    cout << d.c;
}


int main(){
    A d(1,2,3);
    a(d);
    b(d);
    c(d);
}