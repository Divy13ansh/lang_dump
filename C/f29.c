//Buzz
#include <stdio.h>
void main(){
        void buzz(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        buzz(n);
}
void buzz(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
if(s==7||z%10==7||z%7==0)
    printf("buzz");
else
    printf("Not buzz");
}


