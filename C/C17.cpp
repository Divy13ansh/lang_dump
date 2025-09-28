#include<iostream>
using namespace std;
class Temp{
    int a,b;
public:
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"\t"<<b;
    }
    int sum(){
    return a+b;
}
};
int main(){
    Temp A;
    A.setdata(1,2);
    A.show();
    int s;

    s=A.sum();
    cout<<"sum"<<s;
}
