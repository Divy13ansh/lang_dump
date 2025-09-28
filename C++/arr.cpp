#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[2][5] = {{1,2,3,4,6},{5,6,7,8,9}};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        for(int j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}