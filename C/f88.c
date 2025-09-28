//pyramind $
#include <stdio.h>
void main(){
        void pyr(int);
        int a;
        printf("Enter length: ");
        scanf("%d",&a);
        pyr(a);
}
void pyr(a){
int i,j,k;
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
