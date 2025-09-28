//sod
#include <stdio.h>
void main(){
        void sod(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        sod(n);
}
void sod(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
printf("sum of digits is %d",s);
}

