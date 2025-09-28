#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,5,6};
    a.insert(a.begin()+1,9);
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<"\t";
    }
}