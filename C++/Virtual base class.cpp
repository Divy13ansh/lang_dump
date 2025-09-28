#include<iostream>
using namespace std;
class Temp{
    int a,b;
    public:
        void set_data(int x,int y){
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<"\t"<<b<<endl;
        }
};
int main(){
    Temp a;
    a.set_data(100,200);
    a.show();
    return 0;
}
