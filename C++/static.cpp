#include<iostream>
using namespace std;

class C{
    public:
    static int count;
    C(){
        count++;
        cout<<count;
    }
};
int C::count = 0;
int main(){
    C a;
    C b;
    C c;
    cout<<endl<<C::count;
}