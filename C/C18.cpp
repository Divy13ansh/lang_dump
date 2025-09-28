#include<iostream>
using namespace std;
class Two;
class One{
    int a;
public:
    void setdata(int x){
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
    void setdata(int y){
        b=y;
    }
    void show(){
        cout<<b<<endl;
    }
     friend int sum(One,Two);
};
int sum(One x,Two y){
    return (x.a+y.b);
}
int main(){
    One A;
    Two B;
    A.setdata(1);
    A.show();
    B.setdata(2);
    B.show();
    int s;
    //s=A.a+B.b;
    s=A.sum(B);
    cout<<s;
}
