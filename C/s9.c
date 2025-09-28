#include <stdio.h>
void main(){
    char a[100];
    int i,j;
    printf("Enter string: ");
    scanf("%s",a);
    for(i=0;a[i]!= '\0';i++){
        for(j=0;j<=i;j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }
}
