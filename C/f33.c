//Palin
#include <stdio.h>
void main(){
        char palin(int);
        int n;
        char z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = palin(n);
        if(z=='y')
            printf("palin");
        else
            printf("Not palin");
}
char palin(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
if(s==z)
    return 'y';
else
    return 'n';
}
