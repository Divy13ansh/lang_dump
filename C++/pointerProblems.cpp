#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int a = 10, b = 20;
    // int *p = &a, *q = &b;
    // cout<<*p<< "\t"<<*q<<endl;
    // *p = *p + *q;
    // *q = *p - *q;
    // *p = *p - *q;
    
    // cout<<*p<<"\t"<<*q;


//Question 2

    // char str[10] = "hello";
    // int c = 0;
    // char *p = &str[0];
    // while(*p != '\0'){
    //     c++;
    //     p++;
    // }
    // cout<<c;

//Question 3
    // vector<int> v = { 1, 2, 3 };
    // int s = 0;
    // for(auto i = v.begin(); i != v.end(); i++){
    //     s+= *i;
    // }
    // cout<<s;

//Question 4
    // char s[10] = "hello";

    // for(char *i = s; *i != '\0'; i++){
    //     for(char *j = i+1; *j != '\0'; j++){
    //             *i = *i + *j;
    //             *j = *i - *j;
    //             *i = *i - *j;
    //     }
    // }
    // cout<<s;

//Question 3
    // int arr[] = {10,20,30,40,50,60};
    // int s = 0;
    // int *p = arr;
    // int size = sizeof(arr)/sizeof(arr[0]);
    // for(int *i = arr; i < p + size; i++){
    //     s+=*i;
    // }
    // cout<<s;


    // char s[10] = "hello";
    // char *end;
    // char *beg = s;
    // for(char *i = s; *i != '\0'; i++){
    //     end = i;
    // }
    // // end--;
    // while(beg < end){
    //     *beg = *beg + *end;
    //     *end = *beg - *end;
    //     *beg = *beg - *end;
    //     beg++;
    //     end--;
    // }
    // for(int i = 0; s[i]!='\0';i++){
    //     cout<<s[i];
    // }


}