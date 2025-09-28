//loops sod
#include <stdio.h>
void main(){
    int a,*p1,r,i,s;
    p1=&a;
    printf("Enter any no.: ");
    scanf("%d",p1);
    for(i=0,s=0;*p1>0;){
        r=*p1%10;
        s=s+r;
        *p1=*p1/10;
    }
    printf("%d",s);
}

