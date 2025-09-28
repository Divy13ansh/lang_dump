#include<iostream>
using namespace std;

class B{
    public:
    int t;
    void operator=(int t){
        this->t = t;
    }
};

int main(){
    B b;
    b = 10;
    cout<<b.t;
    
}