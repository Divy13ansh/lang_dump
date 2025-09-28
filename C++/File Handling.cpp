#include<iostream>
#include<fstream>
using namespace std;
int main(){
/*
    ofstream A("Abc.txt"); //it will open a file "Abc.txt" in write mode(ios::out)
    A<<"Hello"<<endl;
    A<<"Hi"<<endl;
    A<<"Bye"<<endl;
    A.close();
    ifstream B("Abc.txt"); //it will open a file "Abc.txt" in read mode
    char a[100],b[100],c[100];
    B>>a;
    B>>b;
    B>>c;
    cout<<a;
    cout<<b;
    cout<<c;
}
*/
    ofstream A;
    A.open("country.txt");
    A<<"India"<<endl;
    A<<"UK"<<endl;
    A<<"USA";
    A.close();
    A.open("capital.txt");
    A<<"Delhi"<<endl;
    A<<"London"<<endl;
    A<<"Washington";
    A.close();
    ifstream B;
    /*
    B.open("country.txt");
    char a[100],b[100],c[100];
    B>>a;
    B>>b;
    B>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    B.close();
    B.open("capital.txt");
    B>>a;
    B>>b;
    B>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    B.close();
    */
    char a[100];
    B.open("country.txt");
    while(B){
        //B.getlime(a,50);
        B>>a;
        cout<<a<<endl;
    }
    B.close();
    B.open("capital.txt");
    while(B.eof()!=1){
        B>>a;
        cout<<a<<endl;
    }
    B.close();
}
