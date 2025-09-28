//factorialdouble
#include <stdio.h>
void main(){
        void fac(int,int);
        int n1,n2;
        printf("Enter starting no.");
        scanf("%d",&n1);
        printf("Enter ending no.");
        scanf("%d",&n2);
        fac(n1,n2);
}
void fac(int n1,int n2){
int f,z,i;
for(f=1,i=1;n1<=n2;n1++){
    for(;i<=n1;i++){
            f=f*i;
    }
        printf("factorial of %d is %d\n",n1,f);
    }
}

