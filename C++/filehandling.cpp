#include <iostream>
#include <fstream>
using namespace std;
int main (){

    ofstream outfile("example.txt"); 

    if (outfile.is_open()){
        outfile << "Hello, File Handling in C++!\n";
        outfile << "Let's learn this together. \n";
        outfile.close();
    }

    ifstream infile("example.txt");

    if (infile.is_open () ) {
    string line;
    while (getline(infile, line) ) {
    cout << line << endl;

    }

    infile.close();
    }
    else {
    cout << "Unable to open file for reading. \n";
    }
}