#include <stdio.h>
void main(){
    int i,j,z;
    for(i=1;i<=5;i++){
            z = 70-i;
            for(j=1; j<=i; j++){
                printf("%c", z);
                z++;
            }
            printf("\n");
    }
}

