#include <stdio.h>
void main(){
    int i,j,z;
    for(i=5;i>=1;i--){
            z = 65;
            for(j=1; j<=i; j++){
                printf("%c", z);
                z++;
            }
            printf("\n");
    }
    for(i=2;i<=5;i++){
            z = 65;
            for(j=1; j<=i; j++){
                printf("%c", z);
                z++;
            }
            printf("\n");
}
}
