//Palin
#include <stdio.h>
void main(){
        int palin(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = palin(n);
        if(z==n)
            printf("palin");
        else
            printf("Not palin");
}
int palin(int n){
int r,s;
for(s=0;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
return s;
}



