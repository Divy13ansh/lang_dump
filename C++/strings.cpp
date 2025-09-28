#include<iostream>
#include<vector>
// #include <string.h>
using namespace std;
int main(){
    // char str1[50] = "world";
    // char str2[50] = "hello";
    // char str3[50];
    // strcat(str1,str2);
    // cout<<str1;
    // strcpy(str3,str1);
    // cout<<str3;

    // int cmp = strcmp(str1,str3);

    // cout<<"C-style comparison: "<<(cmp==0 ? "Equal" : "Not equal")<<endl;

    // size_t len = strlen (str1) ;
    // cout << "C-Style Length: " << len << endl;

    // char* found = strstr (str1, "World");
    // if (found)
    //     cout << "C-Style Substring Found: " << found << endl;

    // string name = "Mosh Hamedani";
    //     cout<<islower(name[0])<<endl; // Check if the first character is lowercase
    //     cout<<isupper(name[0])<<endl; // Check if the first character is uppercase
    //     cout<<isalpha(name[0])<<endl; // Check if the first character is a letter
    //     cout<<isdigit(name[0])<<endl; // Check if the first character is a digit
    //     cout<<isalnum(name[0])<<endl; // Check if the first character is a letter or a digit
    //     cout<<ispunct(name[0])<<endl; // Check if the first character is a punctuation
    //     cout<<isspace(name[0])<<endl; // Check if the first character is a whitespace


    string name = "AsB1234";
    int f = 0;
    for(int i=0;i<2;i++){
        if(isupper(name[i]==0)){
            f = 1;
            break;
        }
        else{
            cout<<name[i];
        }
    }
    if(f==0){
        for(int i=2;i<name.length();i++){
            if(isdigit(name[i]==0)){
                break;
            }
            else{
                cout<<name[i];
            }
        }

    }
}