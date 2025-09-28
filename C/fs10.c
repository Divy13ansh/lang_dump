//decrypt
#include <stdio.h>
void main(){
    void dec(char []);
    char n[100];
    printf("Enter any string: ");
    scanf("%s",n);
    dec(n);
}
void dec(char n[]){
    int i;
    for(i=0;n[i]!='\0';i++){
        n[i]=n[i]-1;
        printf("%c",n[i]);
    }
}

