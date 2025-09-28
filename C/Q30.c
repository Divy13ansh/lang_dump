#include <stdio.h>
void main(){
    int i,j,z,k;
    for(i=5;i>=1;i--){
            for(j=1;j<=i;j++){
                printf(" ");
            }
            for(k=5,z=69;k>=i+1;k--,z--){
            printf("%c",z);
            }
            for(k=i,z=64+i;k<=5;k++,z++){
            printf("%c",z);
            }
            printf("\n");
    }
}

