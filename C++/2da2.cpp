#include<iostream>
using namespace std;
int main(){
    int r,c,a[3][3];
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            cout<<"Enter element: ";
            cin>>a[r][c];
        }
    }
    for(c=0;c<3;c++){
        for(r=0;r<3;r++){
            cout<<a[r][c]<<"\t";
    }
    cout<<"\n";
}
}
