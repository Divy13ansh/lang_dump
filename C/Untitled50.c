#include <stdio.h>
void main(){
int i,j;
for(i = 5; i >= 1; i= i - 1){
    for(j = 5; j >= i; j = j - 1){
        printf("%d",j);
    }
    printf("\n");
}
}

