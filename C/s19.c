#include <stdio.h>
void main(){
    char a[100];
    int i,j,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(s=0,i=0;a[i]!='\0';i++){
        s = s + a[i];
    }
    printf("%d",s);
}
