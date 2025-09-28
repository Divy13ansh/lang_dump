#include<iostream>
using namespace std;

class Box{
    private:
    int length;
    public:
    Box(int l){
        length = l;
    }
    friend void showLength(Box);
};

class Circle{
    private:
    float pi = 3;
    public:
    Circle(){
        pi = 3.14;
    }
    friend void showLength(Circle);
};

void showLength(Box b){
    cout<<"Length:"<< b.length<<endl;
}

void showLength(Circle b){
    cout<<"Length:"<< b.pi<<endl;
}

int main(){
    Box b1(10);
    Circle c;
    showLength(b1);
    showLength(c);
}