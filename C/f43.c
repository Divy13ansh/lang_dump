//factorial
#include <stdio.h>
void main(){
        void fac(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        fac(n);
}
void fac(int n){
int f;
for(f=1;n>0;n--){
        f=n*f;
}
printf("fac is %d",f);
}



