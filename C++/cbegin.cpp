#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,9};
    *v.begin() = 55;

    for(auto i=v.cbegin();i<v.size();i++){
        cout<<v[i]<<"\t";
    }
}