#include <iostream>
using namespace std;
void abc(int a){
    cout << a;
}

void abc(float a){
    cout << a*a;
}

void abc(long a){
    cout << a*a+10000000000;
}

int main(){
    // same name but different parameters.
    // cout<<typeid(2.5L)(a);
}