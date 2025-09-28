#include<iostream>
using namespace std;

class B{
    public: 
    int h = 1;
};

void printB(B &b1){
    b1.h = 20;
}

int main(){
    int t = 0;
    B b;
    printB(b);
    cout<<b.h;
}