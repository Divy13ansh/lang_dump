#include<iostream>
using namespace std;
class vehicle{
    public:
    int speed = 20;
};
class twoWheeler : public vehicle{
    public:
    int gears = 4;
};
class Bike : public twoWheeler{
    public:
    int engineCapacity = 200;
};
int main(){
    Bike b1;
    cout << b1.speed << endl;
}