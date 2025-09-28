#include <stdio.h>
void main(){
    char a[100];
    int i,s;
    printf("Enter string: ");
    scanf("%[^\n]",a);
    for(i=0,s=0;a[i]!='\0';i++){
        if(a[i]==' ')
        s = s + 1;
    }
    if(s == 1){
        printf("%c.", a[0]);
        for(i=0;a[i]!=' ';i++){
        }
        for(;a[i]!='\0';i++){
            printf("%c",a[i]);
        }
}
    if(s == 2){
        printf("%c.", a[0]);
            for(i=0;a[i]!=' ';i++){
        }
        printf(" %c.",a[i]);
            for(;a[i]!=' ';i++){
                    i++;
        }
            for(;a[i]!='\0';i++){
                    printf("%c",a[i]);
        }
    }
}
