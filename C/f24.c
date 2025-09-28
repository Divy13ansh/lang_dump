//Armstrong
#include <stdio.h>
void main(){
        void arm(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        arm(n);
}
void arm(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
if (s==z)
    printf("Armstrong");
else
    printf("Not armstrong");
}
