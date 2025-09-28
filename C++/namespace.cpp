#include<iostream>
using namespace std;

namespace hehe{
    class B1{
        int i = 69;
        public:
            void print(){
            cout<<i;
            }
    };   
};
using namespace hehe;

int main(){

    B1 b;
    b.print();
}