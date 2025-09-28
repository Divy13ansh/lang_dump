//palindouble
#include <stdio.h>
void main(){
        void palin();
        palin();
}
void palin(){
int s,r,z,n1,n2;
printf("Enter starting no.");
scanf("%d",&n1);
printf("Enter ending no.");
scanf("%d",&n2);
for(;n1<=n2;n1++){
        s=0;
        z=n1;
    for(;z>0;){
            r=z%10;
            s=s*10+r;
            z=z/10;
    }
        if(s==n1)
            printf("palin %d\n",n1);
    }
}

