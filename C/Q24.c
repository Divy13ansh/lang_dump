#include <stdio.h>
void main(){
    int i,j,z,k;
    for(i=1;i<=5;i++,z++){
            for(j=5;j>=i; j--){
                printf(" ");
            }
            for(k=i,z=64+i;k>=1;k--,z--){
            printf("%c",z);
            }
            printf("\n");
    }
}

