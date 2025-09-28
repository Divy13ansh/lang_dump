#include <stdio.h>
void main(){
    int i,j,k,m;
    for(i=1,k=7;i<=5;i++,k=k-2){
        for(j=1;j<=i && j!=5;j++){
            printf("%d",j);
        }
        for(m=k;m>=1;m--){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);

        }
        printf("\n");
    }
    }

