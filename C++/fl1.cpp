#include<iostream>
using namespace std;
int main(){
    int a,r,s;
    cout<<"Enter any no.: ";
    cin>>a;
    for(;a>0;){
        r=a%10;
        s=s+r;
        a=a/10;
    }
    cout<<s;
    return 0;
}
