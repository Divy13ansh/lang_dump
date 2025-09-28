#include <stdio.h>
void main(){
    char a[100];
    int i,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(s=0,i=0;a[i]!='\0';i++){
        if (a[i]==' ')
            s=s+1;
    }
    printf("No. of words are %d",s+1);
}
