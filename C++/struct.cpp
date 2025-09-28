#include<iostream>
using namespace std;

int main(){
    struct q1{
        int a;
        int b;
    };

    q1 q;
    q.a = 1;
    q.b = 2;
    cout<<q.a<<"\t"<<q.b;
}