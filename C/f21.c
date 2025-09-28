//Armstrong
#include <stdio.h>
void main(){
        int arm(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = arm(n);
        if (z==n)
            printf("armstrong");
        else
            printf("Not armstrong");
}
int arm(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
return s;
}


