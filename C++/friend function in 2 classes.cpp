#include <iostream>
using namespace std;
class Two; //forward declaration
class One{
    int a;
    public:
        void set(int x){
            a=x;
        }
        void show(){
            cout<<a<<endl;
        }
        friend int sum(One,Two);
};
class Two{
    int b;
    public:
        void set(int y){
            b=y;
        }
        void show(){
            cout<<b<<endl;
        }
        friend int sum(One,Two);
};
int

