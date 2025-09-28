#include <iostream>
using namespace std;

class complex{
    public:
    int real, imag;
    complex(){
        real = 0;
        imag = 0;
    }

    complex(int a, int b){
        real = a;
        imag = b;
    }

    void prints(){
        cout<<"real : "<<  real<<"\nimag : "<<imag;
    }

    complex operator+(complex t2){
        complex temp;
        temp.real= this->real + t2.real;
        temp.imag= this->imag + t2.imag;
        return temp;
    }

};


int main(){
    complex c1(1,2), c2(3,4), c3;
    c3 = c1 + c2;
    // c3 = c3 - c1;
    c3.prints();
}