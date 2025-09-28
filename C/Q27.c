#include <stdio.h>
void main(){
    int i,j,z,k;
    for(i=1;i<=5;i++){
            for(j=5;j>=i; j--){
                printf(" ");
            }
            for(k=1,z=65;k<=i;k++,z++){
            printf("%c",z);
            }
            printf("\n");
    }
    for(i=2;i<=5;i++,z++){
            for(j=1;j<=i; j++){
                printf(" ");
            }
            for(k=i,z=64+i;k<=5;k++,z++){
            printf("%c",z);
            }
            printf("\n");
}
}
