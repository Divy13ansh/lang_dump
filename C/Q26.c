#include <stdio.h>
void main(){
    int i,j,z,k;
    for(i=5;i>=1;i--,z++){
            for(j=5;j>=i; j--){
                printf(" ");
            }
            for(k=1,z=65;k<=i;k++,z++){
            printf("%c",z);
            }
            printf("\n");
    }
}

