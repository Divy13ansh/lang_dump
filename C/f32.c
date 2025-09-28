//Palin
#include <stdio.h>
void main(){
        int palin(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = palin(n);
        if(z==1)
            printf("palin");
        else
            printf("Not palin");
}
int palin(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
if(s==z)
    return 1;
else
    return 0;
}





