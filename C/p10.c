//loops palin
#include <stdio.h>
void main(){
    int a,*p1,r,i,s,z;
    p1=&a;
    printf("Enter any no.: ");
    scanf("%d",p1);
    for(z=*p1,i=0,s=0;*p1>0;){
        r=*p1%10;
        s=s*10+r;
        *p1=*p1/10;
    }
    if(s==z)
        printf("Palin");
    else
        printf("Not palin");
}

