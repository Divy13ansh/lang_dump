#include <stdio.h>
void main(){
    int i,j,z;
    for(i=1,z=69;i<=5;i++,z--){
            for(j=1;j<=i; j++){
                printf(" ");
            }
            printf("%c\n",z);
    }
    for(i=4,z=66;i>=1;i--,z++){
            for(j=1;j<=i; j++){
                printf(" ");
            }
            printf("%c\n",z);
    }
}

