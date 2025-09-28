#include<iostream>
using namespace std;
class Student{
    private:
        char n[20];
        int m,h,e,s,c,t;
        float p;
        char g;
    public:
        void input(){
            cout<<"Enter Maths marks: ";
            cin>>m;
            cout<<"Enter Hindi marks: ";
            cin>>h;
            cout<<"Enter English marks: ";
            cin>>e;
            cout<<"Enter Science marks: ";
            cin>>s;
            cout<<"Enter Computer marks: ";
            cin>>c;
        }
        void calc(){
            t=m+h+e+s+c;
            p=t/5;
            if(p>80)
                g='A';
            else
                g='B';
        }
        void disp(){
            cout<<"Total is "<<t<<"\n";
            cout<<"Percentage is "<<p<<"\n";
            cout<<"Grade is "<<g<<"\n";
        }
    };
int main(){
    Student z;
    z.input();
    z.calc();
    z.disp();
}
