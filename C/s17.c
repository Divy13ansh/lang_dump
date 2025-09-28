#include <stdio.h>
void main(){
    char a[100];
    int i,j,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++){
            a[i]--;
            printf("%c",a[i]);
    }
}
