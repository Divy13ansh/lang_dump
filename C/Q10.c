#include <stdio.h>
void main(){
    int i,j,z;
    for(i=1;i<=5;i++){
            z = 69;
            for(j=5; j>=i; j--){
                printf("%c", z);
                z--;
            }
            printf("\n");
    }
}
