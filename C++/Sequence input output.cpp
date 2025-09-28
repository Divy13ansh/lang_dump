/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    char a[100];
    cout<<"Enter any string";
    cin>>a;
    fstream F;
    F.open("data.txt",ios::in|ios::out);
    for(int i=0;a[i]!='\0';i++){
        F.put(a[i]);
        F.seekg(0);
        char ch;
        while(f.eof()!=1){
            f.get(ch);
            cout<<ch;
        }
        f.close();
    }
}
*/
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    float a[4]={17.96,81.23,36.24,79.18}
    ofstream out;
    out.open("data");
    out.write((char*)&a,sizeof(a));
    out.close();
    float b[4];
    ifstream in;
    in.open("data");
    in.read((char*)&b,sizeof(b));
    for(int i=0;i<=3;i++){
        cout<<b[i]<<endl;
    }
    in.close();
    return 0;
}
*/
//READING AND WRITING CLASS OBJECTS
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
    class Inventory{
        char name[10];
        int icode;
        float iprice;
        public:
            void setData(){
                cout<<"Enter item name: ";
                cin>>name;
                cout<<"Enter item code: ";
                cin>>icode;
                cout<<"Enter item price: ";
                cin>>iprice;
            }
            void show(){
                cout<<name<<"\t"<<icode<<"\t"<<iprice;
            }
    };
            int main(){
                int i;
                char a[100];
                fstream F;
                F.open("stock",ios::in|ios::out|ios::binary);
                for(int i=0;i<=4;i++){
                    a[i].setData();
                    F.write((char*)&a[i],sizeof(a[i]));
                }
                F.seekg(0);
                for(int i=0;i<=4;i++){
                    F.read((char*)&a[i],sizeof(a[i]))
                    a[i].show();
                }
                return 0;
            }
