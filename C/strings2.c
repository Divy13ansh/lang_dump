//Input and print reverse
#include <stdio.h>
void main(){
    char a[100];
    int i;
    printf("Enter string: ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){

    }
    i--;
    for (;a[i]>=0; i--){
        printf("%c",a[i]);
    }
}
