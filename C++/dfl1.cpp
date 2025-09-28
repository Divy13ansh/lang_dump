#include<iostream>
using namespace std;
int main(){
    int a,b,r,s,z;
    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;
    for(;a<=b;a++){
        for(s=0,z=a;z>0;){
            r=z%10;
            s=s+r;
            z=z/10;
        }
        cout<<s<<"\n";
    }
    return 0;
}
