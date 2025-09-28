#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream outfile("example.txt");
    if(outfile.is_open()){
        outfile<<"hehehehe";
        outfile.close();
    }
    ifstream infile("example.txt");
    string line;
    if(infile.is_open()){
        while(getline(infile, line)){
            cout<<line<<endl;
        }
        // infile.close();
    }
    outfile(ios::app);
    outfile<<"hihihihi";
    infile.seekg(0,ios::beg);
    while(getline(infile,line)){
        cout<<line<<endl;
    }
}
