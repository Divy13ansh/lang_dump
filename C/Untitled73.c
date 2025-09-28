#include <stdio.h>
void main(){
    int i,j;
    for(i=1; i<=5;i++){
        for(j=i; j>=1;j--){
                printf(" ");
        }
        printf("%d\n", i);
    }
    for(i=4; i>=1;i--){
        for(j=i; j>=1;j--){
                printf(" ");
        }
        printf("%d\n", i);
}
}

