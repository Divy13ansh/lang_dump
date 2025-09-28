#include<iostream>
using namespace std;
class Student{
    int m,h,e,s,c,t,p;
public:
    void input(int,int,int,int,int);
    void calc();
    void disp();
};
inline void Student::input(int v,int w,int x,int y,int z){
    m=v;
    h=w;
    e=x;
    s=y;
    c=z;
}
inline void Student::calc(){
    t=m+h+e+s+c;
    p=t/5;
}
inline void Student::disp(){
    cout<<"Total is "<<t<<"\n";
    cout<<"Percentage is "<<p<<"\n";
}
int main(){
    Student z;
    z.input(90,90,90,90,80);
    z.calc();
    z.disp();
}
