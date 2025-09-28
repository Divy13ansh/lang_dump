#include<iostream>
using namespace std;
class Counter{
    public:
    int id = 0;
    static int c;
    Counter(){
        c++;
        id = c;
    }
    void display(){
        cout<<"id:" << id<<"\t";
        cout <<"counter:"<< c << endl;
    }
        
};
int Counter :: c = 0;

int main(){
    Counter obj1;
    Counter obj2;
    Counter obj3;
    obj1.display();
    obj2.display();
    obj3.display();
}