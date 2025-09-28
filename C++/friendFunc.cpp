#include <iostream>
using namespace std;

class A{
    public:
    const int i = a;
    A(int a){
            const int i = a;
        }
};

int main(){
    A a(10);
    A b(20);
    cout<< a.i<< endl<< b.i;


}