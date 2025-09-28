#include <stdio.h>
void main(){
    char a[100];
    int i;
    printf("Enter string: ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        printf("%c\n",a[i]);
    }
}
