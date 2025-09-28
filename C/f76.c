//Buzzdouble
#include <stdio.h>
void main(){
        void buzz();
        buzz();
}
void buzz(){
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
            s=s+r;
            z=z/10;
    }
        if(s==7||n1%10==7||n1%7==0)
            printf("buzz %d\n",n1);
    }
}



