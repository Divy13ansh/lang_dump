#include<iostream>
#include<math.h>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r, int i){
            real = r;
            imag = i;
        }
    friend void operator+(Complex c1, Complex c2);
        
};

void operator+(Complex c1, Complex c2){
    cout<<c1.real + c2.real<<"+"<<c1.imag+c2.imag<<"i";
}


int main(){
    Complex c1(4,5);
    Complex c2(5,6);
    c1+c2;
}