#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter age: ";
    cin>>a;
    if(a<12)
        cout<<"child";
    else{
        if(a>=12&&a<=19)
            cout<<"teenager";
        else{
            if(a>=19&&a<=65)
                cout<<"Adult";
            else
                cout<<"Old age";
        }
    }
    return 0;
}
