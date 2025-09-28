#include<iostream>
using namespace std;
class Student{
    int m,h,e,s,c,t;
    float p;
    char n[20],g;
public:
    void input(int,int,int,int,int);
    void calc();
    void disp();
};
void Student::input(int v, int w, int x, int y, int z){
        m=v;
        h=w;
        e=x;
        s=y;
        c=z;
}
void Student::calc(){
        t=m+h+e+s+c;
        p=t/5;
        if(p>80)
            g='A';
        else
            g='B';
}
void Student::disp(){
        cout<<"Total is "<<t<<"\n";
        cout<<"Percentage is "<<p<<"\n";
        cout<<"Grade is "<<g<<"\n";
}
int main(){
    Student z;
    z.input(10,20,30,40,50);
    z.calc();
    z.disp();
}
