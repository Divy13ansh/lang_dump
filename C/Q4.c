#include <stdio.h>
void main(){
    int i,j,z;
    for(i=0;i<=4;i++){
            z = 65 + i;
            for(j=i; j>=0; j--){
                printf("%c", z);
                z--;
            }
            printf("\n");
    }
}

