#include<iostream>
#include<math.h>
using namespace std;

class Geometry{
    public:
        void calculateArea(int side){
            cout<< side*4<<"\n";
        }
        void calculateArea(int len, int wid){
            cout<< len*wid<<"\n";
        }
        void calculateArea(double rad){
            cout<< M_PI_4 * rad<<"\n";
        }
};

int main(){
    Geometry s1;
    s1.calculateArea(4);
    s1.calculateArea(4.2);
    s1.calculateArea(4,2);
}