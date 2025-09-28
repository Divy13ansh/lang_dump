#include<iostream>
using namespace std;
int main(){
    int a,r,s;
    cout<<"Enter any no.: ";
    cin>>a;
    while(a>0){
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    cout<<s;
    return 0;
}
