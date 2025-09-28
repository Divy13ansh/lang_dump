//Palin
#include <stdio.h>
void main(){
        void palin();
        palin();
}
void palin(){
int r,s,z,n;
printf("Enter any no.");
scanf("%d",&n);
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


