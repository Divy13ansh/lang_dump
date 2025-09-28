#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three values";
    cin>>a>>b>>c;
    if(a>b){
        cout<<"max value"<< a;
    }
    else{
        cout<<"max value"<< c;

    if(b>c){
        cout<<"max value"<<b;
    }
    else{
        cout<<"max value"<<c;
    }
    }
}
