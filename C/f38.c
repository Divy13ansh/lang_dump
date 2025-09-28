//sod
#include <stdio.h>
void main(){
        void sod();
        int n;
        sod();
}
void sod(){
int r,s,n;
printf("Enter any no.");
scanf("%d",&n);
for(s=0;n>0;){
    r=n%10;
    s=s+r;
    n=n/10;
}
printf("sum of digits is %d",s);
}

