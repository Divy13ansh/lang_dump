//factorial
#include <stdio.h>
void main(){
        void fac();
        fac();
}
void fac(){
int f,n;
printf("Enter any no.");
scanf("%d",&n);
for(f=1;n>0;n--){
        f=n*f;
}
printf("fac is %d",f);
}
