#include<iostream>
using namespace std;
class Student{
    int m,h,e,s,c,t,p;
    void input(int,int,int,int,int);
    void calc();
    void disp();
public:
    void temp(){
        input(10,20,30,40,50);
        calc();
        disp();
    }
};
void Student::input(int v,int w,int x,int y,int z){
        m=v;
        h=w;
        e=x;
        s=y;
        c=z;
}
void Student::calc(){
        t=m+h+e+s+c;
        p=t/5;
}
void Student::disp(){
        cout<<"Total is "<<t<<"\n";
        cout<<"Percentage is "<<p<<"\n";
}
int main(){
    Student z;
    z.temp();
}
