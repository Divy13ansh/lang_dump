//tabledouble
#include <stdio.h>
void main(){
        void tab();
        tab();
}
void tab(){
int t,s,n1,n2;
printf("Enter any no.");
scanf("%d",&n1);
printf("Enter ending no.");
scanf("%d",&n2);
for(;n1<=n2;n1++){
    for(t=1;t<=10;){
            s=n1*t;
            printf("%d\n",s);
            t++;
    }
}
}
