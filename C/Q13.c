#include <stdio.h>
void main(){
    int i,j,z;
    for(i=5;i>=1;i--){
            for(j=5,z = 64+j; j>=i; j--){
                printf("%c", z);
                z--;
            }
            printf("\n");
    }
    for(i=4;i>=1;i--){
            for(j=1,z = 70-j; j<=i; j++){
                printf("%c", z);
                z--;
            }
            printf("\n");
}
}
