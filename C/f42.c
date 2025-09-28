//factorial
#include <stdio.h>
void main(){
        int fac(int);
        int n,z;
        printf("Enter any no.");
        scanf("%d",&n);
        z = fac(n);
        printf("fac is %d",z);
}
int fac(int n){
int r,f;
for(f=1;n>0;n--){
        f=n*f;
}
return f;
}


