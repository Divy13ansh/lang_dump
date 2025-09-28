#include<iostream>
using namespace std;
int main(){
    void swap(int &, int &);
    int a,b;
    a=100;
    b=200;
    cout<<a<<"\t"<<b<<endl;
    swap(a,b);
    cout<<a<<"\t"<<b<<endl;
    return 0;
}
void swap(int &X,int &Y){
    int z;
    z=X;
    X=Y;
    Y=z;
}
