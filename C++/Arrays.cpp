#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,5,6};
    char t[5]= {'h','e','l','l','o'};
    for(int i = 0;i<(sizeof(t)/sizeof(t[0]));i++){
        cout<<t[i];
    }
    cout<<endl;
    a.push_back(10);
    for(int i=0;i<a.size();i++){
        // cout<<a[i]<<"\t";
    }
    cout<<endl;
    a.pop_back();
    for(int i=0;i<a.size();i++){
        // cout<<a[i]<<"\t";
    }
    cout<<a.front();
    cout<<a.back();
    cout<<a.size();


}