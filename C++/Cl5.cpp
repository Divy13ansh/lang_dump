#include<iostream>
using namespace std;
class Student{
    int m,h,e,s,c,t,p;
    public:
        void input(int v,int w,int x,int y,int z){
            m=v;;
            h=w;
            e=x;
            s=y;
            c=z;
            t=m+h+e+s+c;
            p=t/5;
        }
        void disp(){
            cout<<"Total is "<<t<<"\n";
            cout<<"percentage is "<<p<<"\n";
        }
        void sum(Student x, Student y){
            m=x.m+y.m;
            h=x.h+y.h;
            e=x.e+y.e;
            s=x.s+y.s;
            c=x.c+y.c;
            t=x.t+y.t;
            p=x.p+y.p;
        }
        Student sum(Student y){
            Student z;
            z.m=m+y.m;
            z.h=h+y.h;
            z.e=e+y.e;
            z.s=s+y.s;
            z.c=c+y.c;
            return z;
        }
        friend Student Sum(Student,Student);

};
Student Sum(Student x,Student y){
    Student z;
    z.m=x.m+y.m;
    z.h=x.h+y.h;
    z.e=x.e+y.e;
    z.s=x.s+y.s;
    z.c=x.c+y.c;
    return z;
}
int main(){
    Student a,b,c,d,e;
    a.input(10,20,30,40,50);
    a.disp();
    b.input(10,20,30,40,50);
    b.disp();
    c.sum(a,b);
    c.disp();
    d=a.sum(b);
    d.disp();
    e=Sum(a,b);
    e.disp();
}

