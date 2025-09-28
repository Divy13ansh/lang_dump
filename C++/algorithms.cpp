#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    // int k = 2;
    char str[10] = "hello";
    sort(str,str+5);

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());
    // rotate(v.begin(),v.begin()+k+1,v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }
    // char s[] = "madam";
    // int n = sizeof(s)/sizeof(s[0]);
    // char *left = s;
    // char *right;
    // int f = 1;
    // for(char *i = left;*i != '\0';i++){
    //     right = i;
    // }
    // while(left<right){
    //     if(*left!=*right){
    //         f = 0;
    //     }
    //     left++;
    //     right--;
    // }
    // if(f==0){
    //     cout<<"not";
    // }
    // else{
    //     cout<<"yes";
    // }
    
    

}