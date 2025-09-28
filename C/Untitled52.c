#include <stdio.h>
void main(){
int i,j;
for(i = 5; i >= 1; i= i - 1){
    for(j = i; j >= 1; j = j - 1){
        printf("%d",j);
    }
    printf("\n");
}
}

