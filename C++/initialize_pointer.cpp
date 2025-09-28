#include <iostream>

using namespace std;
int main() {

    // pointer Intilaization

    int n =10;
    cout<<"Address of x :"<<&n<<endl;
    int  *const p  = &n;
    cout<<"value of p :"<<p<<endl;
    cout<<"value of *p :"<<*p<<endl;


    int m=20;
    // p=&m;
    cout<<"value of p :"<< p <<endl;
    cout<<"value of *p :"<< *p <<endl;

    return 0;
}