#include<iostream>
using namespace std;

class Example{
    public:
        static int c;

        void Display(){
            cout<<c;
        }

        void operator++(){
            c++;
        }
        

};

Example operator+(Example e1, Example e2){
    // c++;
    Example temp;
    temp.c = e1.c+e2.c;
    return temp;
}

int Example::c=0;

int main(){
    Example e1,e2,e3;
    // e.c++;
    // e++;
    // ++e1;
    e1.c = 10;
    e2.c = 20;
    e3 = e1+e2;
    e3.Display();
}