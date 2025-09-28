#include <stdio.h>
void main(){
    int i,j,k,l;
    for(i=5; i>=1;i--){
        for(j=1;j<=i;j++){
                printf(" ");
        }
        for(k=5;k>=i;k--){
            printf("%d",k);
        }
        for(k=k+2;k<=5;k++){
            printf("%d",k);
        }
        printf("\n");

    }
}

