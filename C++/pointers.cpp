#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5,6};
    // // int a = 99;
    // // int *p = &a;
    // // cout<<p<<"\t"<<*p;

    
    // // for(int i = 0;i<6;i++){
    // //     cout<<*(a.begin()+i)<<"\t";
    // // }
    // // cout<<endl;

    // // for(auto i = a.begin();i!=a.end();i++){
    // //     cout<<*i<<"\t";
    // // }

    // a.insert(a.begin()+1,4,99);
    // for(int i = 0;i<a.size();i++){
    //     cout<<(a[i])<<"\t";
    // }
    // cout<<endl;
    // a.erase(a.begin()+3);
    // for(int i = 0;i<a.size();i++){
    //     cout<<(a[i])<<"\t";
    // }
    // cout<<endl;
    // a.erase(a.begin()+3,a.begin()+5);
    // for(int i = 0;i<a.size();i++){
    //     cout<<(a[i])<<"\t";
    // }
    // cout<<endl;
    // a.clear();
    // for(int i = 0;i<a.size();i++){
    //     cout<<(a[i])<<"\t";
    // }
    for(auto i = a.rbegin();i!=a.rend();i++){
        cout<<*i<<"\t";
    }
}