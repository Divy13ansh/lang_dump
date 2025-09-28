#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost price: ";
    cin>>cp;
    cout<<"Enter Selling price: ";
    cin>>sp;
    if(cp>sp)
        cout<<"loss";
    else
        cout<<"profit";
    return 0;
}

