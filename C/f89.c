#include <stdio.h>
void main(){
        void pyr();
        pyr();
}
void pyr(){
int i,j,k,a;
printf("Enter length: ");
scanf("%d",&a);
for(i=1;i<=a;i++){
    for(j=a;j>=i;j--){
        printf(" ");
    }
    for(k=1;k<=i;k++){
        printf("$ ");
    }
    printf("\n");
}
    }
