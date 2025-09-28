#include <stdio.h>
void main(){
    int i,j,z;
    for(i=5,z=65;i>=1;i--,z++){
            for(j=1;j<=i; j++){
                printf(" ");
            }
            printf("%c\n",z);
    }
    for(i=2,z=68;i<=5;i++,z--){
            for(j=1;j<=i; j++){
                printf(" ");
            }
            printf("%c\n",z);
    }
}


