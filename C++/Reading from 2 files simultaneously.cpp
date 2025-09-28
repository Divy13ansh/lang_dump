#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
    char a[100];
    ifstream fin1,fin2;
    fin1.open("country.txt");
    fin2.open("capital.txt");
    for(int i = 1;i<=10;i++){
        if(fin1.eof()!=0){
            cout<<"Exit from country "<<endl;
            exit(0);
        }
        fin1.getline(a,50);
        cout<<"Capital of "<<a<<" is ";
        if(fin2.eof()!=0){
            cout<<"Exit from capital "<<endl;
            exit(1);
        }
        fin2.getline(a,50);
        cout<<a<<endl;
    }
    fin1.close();
    fin2.close();
}
