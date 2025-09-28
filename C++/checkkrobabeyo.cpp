#include<iostream>
using namespace std;
void add(float a){
    cout<<a;
}
void add(int a){
    cout<<a;
}
using namespace std;
int main(){
    add(5.7);
}