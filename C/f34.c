//Palin
#include <stdio.h>
void main(){
        void palin(int);
        int n;
        printf("Enter any no.");
        scanf("%d",&n);
        palin(n);
}
void palin(int n){
int r,s,z;
for(s=0,z=n;n>0;){
    r=n%10;
    s=s*10+r;
    n=n/10;
}
if(z=='y')
        printf("palin");
else
        printf("Not palin");
}

