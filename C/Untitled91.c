#include <stdio.h>
void main(){
    int i,j,k,l;
    for(i=1; i<=5;i++){
        for(j=5;j>=i;j--){
                printf(" ");
        }
        for(k=i;k>=1;k--){
            printf("%d",k);
        }
        for(k=2;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");

    }
}

