#include<iostream>
using namespace std;
class Time{
    int h,m;
public:
    Time(){
        h=m=0;
    }
    Time(int x,int y){
    h=x;
    m=y;
    }
    void disp(){
        cout<<h<<"\n";
        cout<<m<<"\n";
    }
    void sum(Time x,Time y){
        h=x.h+y.h;
        m=x.m+y.m;
        if(m>60){
            h=h+(m/60);
            m=m%60;
        }
    }
    Time sum(Time y){
        Time z;
        z.h=h+y.h;
        z.m=m+y.m;
        if(z.m>60){
            z.h=z.h+(z.m/60);
            z.m=z.m%60;
        }
        return z;
    }
    friend Time sum(Time,Time);
};
Time sum(Time x,Time y){
    Time z;
    z.h=x.h+y.h;
    z.m=x.m+y.m;
    if(z.m>60){
        z.h=z.h+(z.m/60);
        z.m=z.m%60;
    }
    return z;
}
int main(){
    Time A(7,200);
    Time B(8,200);
    A.disp();
    B.disp();
    Time C;
    C.sum(A,B);
    C.disp();
    Time D;
    D=A.sum(B);
    D.disp();
    Time E;
    E=sum(A,B);
    E.disp();
}
