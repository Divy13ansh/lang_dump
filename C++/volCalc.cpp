#include<iostream>
#include<math.h>
using namespace std;

class Volume{
    public:
        void calculate(int side){
            cout<< side*side*side<<"\n";
        }
        void calculate(int len, int wid, int height){
            cout<< len*wid*height<<"\n";
        }
        void calculate(double rad, double height){
            cout<< M_PI_4 * rad * rad * height<<"\n";
        }
};

int main(){
    Volume s1;
    s1.calculate(4);
    s1.calculate(4.2,5);
    s1.calculate(4,2,6);
}