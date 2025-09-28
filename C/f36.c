//sod
#include <stdio.h>
void main(){
        int sod(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = sod(n);
        printf("sum of digits is %d",z);
}
int sod(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
return s;
}
