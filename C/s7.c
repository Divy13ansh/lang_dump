#include <stdio.h>
void main(){
    char a[100];
    int i,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    i=0;
    printf("%c",a[i]);
    for(i=1;a[i]!='\0';i++){
        if(a[i]==' '){
            printf(".");
            printf("%c",a[i+1]);
        }
    }
    i--;
    for(;a[i]!= ' ';i--){
    }
    i+=2;
    for(;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    }
