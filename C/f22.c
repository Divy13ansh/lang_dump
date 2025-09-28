//Armstrong
#include <stdio.h>
void main(){
        int arm(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = arm(n);
        if (z==1)
            printf("armstrong");
        else
            printf("Not armstrong");
}
int arm(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
if (s==z)
    return 1;
else
    return 0;
}



