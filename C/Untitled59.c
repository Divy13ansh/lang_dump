#include <stdio.h>
void main(){
    int i,j;
    for(i=1; i<=5;i++){
        for(j = 5; j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=4; i>= 1;i--){
        for(j = 5; j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}

