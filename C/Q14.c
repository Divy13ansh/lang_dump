#include <stdio.h>
void main(){
    int i,j,z;
    for(i=1;i<=5;i++){
            for(j=5,z=69; j>=i; j--){
                printf("%c", z);
                z--;
            }
            printf("\n");
    }
    for(i=4;i>=1;i--){
            for(j=5,z = 69; j>=i; j--){
                printf("%c", z);
                z--;
            }
            printf("\n");
}
}
