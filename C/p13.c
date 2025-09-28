//double loop 3
#include <stdio.h>
void main(){
    int a,b,*p1,*p2,r,i,s,z;
    p1=&a;
    p2=&b;
    printf("Enter starting no.: ");
    scanf("%d",p1);
    printf("Enter ending no.: ");
    scanf("%d",p2);
    for(;*p1<=*p2;(*p1)++){
        for(z=*p1,i=0,s=0;z>0;){
            r=z%10;
            s=s*10+r;
            z=z/10;
        }
        if((*p1)==s)
            printf("Palin %d\n",(*p1));
    }
}

