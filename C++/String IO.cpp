#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
 /*   char a[100];
    cout<<"Enter any string: ";
    cin>>a;
    cout<<a<<endl;
}
*/
/*
    char a[100];
    cin>>a;
    cout<<a<<endl;
    cin.getline(a,50);
    cout<<a<<endl;
    cin.getline(a,50,'*');
    cout<<a;
    }

    char *p="emulation";
    for(int i=1;i<=strlen(p);i++){
        cout.write(p,i);
        cout<<endl;
    }
}
*/
    cout.setf(ios::showpoint);
    cout.width(10);
    cout<<"Hello"<<endl;
    cout.width(10);
    cout<<"Hi"<<endl;
    cout.precision(3);
    cout.width(10);
    cout<<sqrt(3)<<endl;
    cout.width(10);
    cout<<3.14159<<endl;
    cout.width(10);
    cout<<2.500198<<endl;
    float pi;
    pi=22.07/7.0;
    int i;
    for(i=1;i<=10;i++){
        cout.width(i+1);
        cout.precision(i);
        cout<<pi<<endl;
    }
    cout.width(10);
    cout.precision(3);
    cout.fill('*');
    cout<<3.14159<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout.width(10);
    cout.precision(3);
    cout.fill('*');
    cout<<3.14159;
}
