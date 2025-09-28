#include <stdio.h>
void main(){
    char a[100];
    int i,j,k,l;
    printf("Enter string: ");
    scanf("%s",a);
    for(l=0;a[l]!= '\0';l++){}
    for(i=0;i<=l-1;i++){
        for(j=l-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%c",a[k]);
        }
        printf("\n");

    }
}

