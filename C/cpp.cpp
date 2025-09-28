#include<iostream>
using namespace std;
int main(){
    int i,n,sum = 0;
    cout<<"Enter a no.: ";
    cin>>n;
    i = 2;
    while(i<=n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout<<sum;
}

